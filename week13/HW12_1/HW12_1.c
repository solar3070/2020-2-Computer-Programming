#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, num, sum = 0;
	FILE *fp, *fp2;
	
	srand(time(NULL));

	fp = fopen("random.txt", "wt");
	if (fp == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	for (i = 0; i < 10; i++)
		fprintf(fp, "%d\n", rand() % 100);

	fclose(fp); // 안해주면 결과 안나옴 닫아줘야 파일 생성

	fp = fopen("random.txt", "rt");
	if (fp == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}
	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	fscanf(fp, "%d", &num);
	while (!feof(fp)) {
		fprintf(fp2, "%d\n", num);
		printf("%5d", num);
		sum += num;
		fscanf(fp, "%d", &num);
	}
	printf("\n합은 %d\n", sum);

	fclose(fp);
	fclose(fp2);
}