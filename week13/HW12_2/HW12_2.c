#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	FILE *fp1, *fp2;

	fp1 = fopen("input.txt", "rt");
	if (fp1 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}
	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("파일 오픈 에러\n");
		return 1;
	}

	while ((ch = fgetc(fp1)) != EOF) 
		putc(toupper(ch), fp2);
	fprintf(fp2, "\n\n");

	fseek(fp1, 0, SEEK_SET);
	while ((ch = fgetc(fp1)) != EOF) 
		putc(tolower(ch), fp2);

	fclose(fp1);
	fclose(fp2);
}