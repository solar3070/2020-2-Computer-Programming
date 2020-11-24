#include <stdio.h>
int main(void)
{
	int state;
	FILE *fp1, *fp2;
	char buf[30];

	fp1 = fopen("hello.txt", "rt");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fp2 = fopen("hello2.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fgets(buf, sizeof(buf), fp1);
	while (!feof(fp1)) {
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp1);
	}

	state = fclose(fp1);
	if (state) {
		printf("file close error!\n");
		return 1;
	}
	state = fclose(fp2);
	if (state) {
		printf("file close error!\n");
		return 1;
	}
}