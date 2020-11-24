#include <stdio.h>
int main(void)
{
	int state;
	FILE * fp;
	char ch;

	fp = fopen("hello.out", "wt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp, "%s\n", "Hello");
	fprintf(fp, "%s\n", "World");

	state = fclose(fp);
	if (state != 0) // �� üũ�� ���� ����
	{
		printf("file close error!\n");
		return 1;
	}
} 