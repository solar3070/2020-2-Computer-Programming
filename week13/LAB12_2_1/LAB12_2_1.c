#include <stdio.h>
int main(void)
{
	int state;
	FILE *fp = fopen("hello.txt", "at");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "%s\n", "Hi");
	fprintf(fp, "%s\n", "Everybody");

	state = fclose(fp);
	if (state) {
		printf("file close error!\n");
		return 1;
	}
}