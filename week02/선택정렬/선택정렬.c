#include <stdio.h>
#define SIZE 6
int main(void)
{
	int a[SIZE] = {5, 3, 8, 1, 2, 7};
	int i, j, temp, min, minIndex;

	for(i = 0; i < SIZE-1; i++) { //min 쓰는 게 버전1, 안쓰는 게 버전2
		// minIndex를 찾는다
		min = a[i];
		minIndex = i;
		for (j = i + 1; j < SIZE; j++) 
			if (min > a[j]) {
				min = a[j];
				minIndex = j;
			}
		// i번째 원소와 minIndex 위치의 원소를 교환
		temp = a[i];
		a[i] = a[minIndex];
		a[minIndex] = temp;
	}

	for(i = 0;i < SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

/* 버전 2

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