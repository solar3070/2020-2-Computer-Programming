#include <stdio.h>
int main(void) 
{
	int state;
	FILE *fp, *fp2;
	char ch;

	fp = fopen("hello.out", "wt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fp2 = fopen("hello.out", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "%s\n", "Hello");
	fprintf(fp, "%s\n", "World");

	while ((ch = getc(fp2)) != EOF) 
		putc(ch, stdout);

	state = fclose(fp);
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