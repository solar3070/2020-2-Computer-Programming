#include <stdio.h>
int main(void)
{
	int table[8][9];
	int i, j, n;
	
	for (i = 0; i < 8; i++)
		for (j = 0; j < 9; j++)
			table[i][j] = (i + 2) * (j + 1);

	printf("---������ ǥ�� ������ �����ϴ�.\n");
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 9; j++)
			printf("%4d", table[i][j]);
		printf("\n");
	}

	printf("---���ϴ� ��������? ");
	scanf("%d", &n);
	for (j = 0; j < 9; j++)
		printf("%4d", table[n - 2][j]);
	printf("\n");
}