#include <stdio.h>

void initArray(int a[][4], int size, int num) // 여기를 작성
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = i + (j * num);
}

void rotateArray(int a[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++) 
			printf("%d ", a[size - 1 - i][3 - j]);
		printf("\n");
	}		
}

int main(void) 
{
	int i, j;
	int a[4][4], b[4][4];
	int n;

	scanf("%d", &n);
	initArray(a, 4, n);
	rotateArray(a, 4);
}