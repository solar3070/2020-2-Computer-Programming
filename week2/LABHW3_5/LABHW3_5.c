#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int list[], int size)
{
	int i, j, temp, minIndex;

	for (i = 0; i < size - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < size; j++)
			if (list[minIndex] > list[j])
				minIndex = j;

		temp = list[i];
		list[i] = list[minIndex];
		list[minIndex] = temp;
	}
}

int main(void)
{
	int arr[10];
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 100;

	printf("발생된 난수: \t");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	selectionSort(arr, 10);
	printf("정렬 후: \t");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}