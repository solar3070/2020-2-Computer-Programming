#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[SIZE] = {5, 3, 8, 1, 2, 7};
	int i, j, temp, min, minIndex;

	for(i = 0; i < SIZE-1; i++) { //min ���� �� ����1, �Ⱦ��� �� ����2
		// minIndex�� ã�´�
		min = a[i];
		minIndex = i;
		for (j = i + 1; j < SIZE; j++) 
			if (min > a[j]) {
				min = a[j];
				minIndex = j;
			}
		// i��° ���ҿ� minIndex ��ġ�� ���Ҹ� ��ȯ
		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}

	for(i = 0;i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

/* ���� 2

	int i, j, temp, minIndex;

	for (i = 0; i < SIZE - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < size; j++)
			if (a[minIndex] > a[j])
				minIndex = j;

		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}
	
*/