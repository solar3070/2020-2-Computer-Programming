#include <stdio.h>
int main(void)
{
	int x[] = {0, 0, 1, 2, 3};
	char c[] = "BBCDE";
	double f = 2.3;
	int i, sum = 0;

	// ��) �߰�
	int *px;
	char *pc;
	double *pd;

	px = x;
	pc = c;
	pd = &f;
	printf("��-1) %d %c %.1f\n", x[0], c[0], f);
	printf("��-2) %d %c %.1f\n", *px, *pc, *pd);

	// ��) �߰�
	*px = -1;
	*pc = 'A';
	*pd = 3.5;
	printf("��) %d %c %.1lf\n", x[0], c[0], f);

	// ��) �߰�
	for (i = 0; i < 5; i++)
		sum += *(px++);
	printf("��) sum = %d\n", sum); // sum�� ���� 5�̴�. x[0]�� ���� ������ �̹� -1�� ����

	// ��)
	px = x;
	for (i = 0; i < sizeof(x) / sizeof(int); i++)
	{
		*px = 100;
		px++; // ��-B)
	}

	// ��)
	pc = c;
	for (i = 0; i < sizeof(c) / sizeof(char); i++)
	{
		*pc = 'X';
		pc++; // ��-B)
	}
} 