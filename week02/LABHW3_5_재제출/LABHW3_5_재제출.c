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

void printData(int a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main(void)
{
	int arr[10];
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		arr[i] = rand() % 100;

	printf("발생된 난수: \t");
	printData(arr, 10);

	selectionSort(arr, 10);
	printf("정렬 후: \t");
	printData(arr, 10);
}

/* 재제출 변경 사항

printData함수 생성
*/