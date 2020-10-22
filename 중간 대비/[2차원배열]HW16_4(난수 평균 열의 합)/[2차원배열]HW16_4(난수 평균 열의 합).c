#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initTable(int table[][5], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
			table[i][j] = rand() % 100; 
}

int totalTable(int table[][5], int size)
{	
	int i, j, total = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
			total += table[i][j];
	return total;
}

void printTable(int table[][5], int size)
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 5; j++)
			printf("%4d", table[i][j]);
		printf("\n");
	}
}

void columnSum(int table[][5], int size)
{
	int i, j, sum;
	for (j = 0; j < 5; j++) {
		sum = 0;
		for (i = 0; i < size; i++)
			sum += table[i][j];
		printf("%4d", sum);
	}
	printf("\n");
}

int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);
	printTable(table, 3); 

	printf("----각 열의 합----\n");
	columnSum(table, 3);

	return 0;
} 