#include <stdio.h>
int main(void)
{
	int state;
	FILE * fp;

	char ch;

	fp = fopen("hello.in", "rt");
	if (fp == NULL)
	{
		printf("���� ���� �����Դϴ�!!!\n");
		return 1;
	}

	// getc, putc�� ����Ͽ� ������ ������ �а� ����
	while ((ch = getc(fp)) != EOF)
		putc(ch, stdout);

	fclose(fp);

	return 0;
} 