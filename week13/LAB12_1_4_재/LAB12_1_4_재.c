#include <stdio.h>
int main(void) 
{
	int state;
	FILE *fp;
	char ch;

	fp = fopen("hello.out", "wt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "%s\n", "Hello");
	fprintf(fp, "%s\n", "World");

	fclose(fp);

	fp = fopen("hello.out", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	while ((ch = getc(fp)) != EOF) 
		putc(ch, stdout);

	fclose(fp);
}