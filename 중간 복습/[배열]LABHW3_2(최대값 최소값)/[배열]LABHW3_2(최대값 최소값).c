#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;
	return;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printMinMax(int arr[], int size)
{
	int i, max, min, minIdx, maxIdx;
	max = min = arr[0];

	for (i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIdx = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIdx = i;
		}
	}
	printf("�ִ밪: �ε��� = %d, �� = %d\n", maxIdx, max);
	printf("�ּҰ�: �ε��� = %d, �� = %d\n", minIdx, min);
}

int main(void) // �������� ����
{
	int a[10];

	//srand(time(NULL));
	srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����

	initArray(a, 10);
	printArray(a, 10);
	printMinMax(a, 10);

	return 0;
} 