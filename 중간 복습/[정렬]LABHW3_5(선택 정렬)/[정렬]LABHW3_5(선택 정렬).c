#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size)
{
	int i, j, minIdx;
	int temp;

	for (i = 0; i < size - 1; i++) {
		minIdx = i;
		for (j = i + 1; j < size; j++)
			if (list[j] < list[minIdx])
				minIdx = j;
		temp = list[i];
		list[i] = list[minIdx];
		list[minIdx] = temp;
	}
}

/*
void selectionSort(int list[], int size)
{
	int i, j, maxIdx;
	int temp;

	for (i = 0; i < size - 1; i++) {
		maxIdx = i;
		for (j = i + 1; j < size; j++)
			if (list[j] > list[maxIdx])
				maxIdx = j;
		temp = list[i];
		list[i] = list[maxIdx];
		list[maxIdx] = temp;
	}
}
*/

void printList(int list[], int size)
{
	int i;
	for (i = 0; i < 10; i++) 
		printf("%d ", list[i]);
	printf("\n");
}

int main(void)
{
	int list[10];
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		list[i] = rand() % 100;

	printf("발생된 난수:\t");
	printList(list, 10);

	selectionSort(list, 10);
	printf("정렬 후:\t");
	printList(list, 10);
}