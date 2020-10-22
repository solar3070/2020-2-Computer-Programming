#include <stdio.h>
int main(void)
{
	int table[8][9];
	int i, j, n;
	
	for (i = 0; i < 8; i++)
		for (j = 0; j < 9; j++)
			table[i][j] = (i + 2) * (j + 1);

	printf("---구구단 표는 다음과 같습니다.\n");
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 9; j++)
			printf("%4d", table[i][j]);
		printf("\n");
	}

	printf("---원하는 구구단은? ");
	scanf("%d", &n);
	for (j = 0; j < 9; j++)
		printf("%4d", table[n - 2][j]);
	printf("\n");
}