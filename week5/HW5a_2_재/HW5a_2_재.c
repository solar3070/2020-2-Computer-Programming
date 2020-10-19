#include <stdio.h>

void initTable(int a[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = (j + 1) + (i * 4);
}

void printTable(int a[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotationTable(int a1[][4], int a2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a2[i][j] = a1[3 - j][i];
}

void copyTable(int a1[][4], int a2[][4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a1[i][j] = a2[i][j];
}

int main(void)
{
	int arr1[4][4], arr2[4][4];
	int i;

	initTable(arr1, 4);
	printTable(arr1, 4);

	for (i = 0; i < 4; i++) {
		rotationTable(arr1, arr2, 4);
		printTable(arr2, 4);
		copyTable(arr1, arr2, 4);
	}
}