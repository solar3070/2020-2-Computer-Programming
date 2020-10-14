#include <stdio.h>

void printSet(int arr[], int size)
{
	int i;

	printf("{ ");
	for (i = 0; i < size; i++) {
		if (i > 0)
			printf(", ");
		printf("%d", arr[i]);
	}
	printf(" }\n");
}

int main(void)
{
	int arr[5];
	int i, num;

	for (i = 0; i < 5; i++) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &num);

		//arr[i] = num;
		printSet(arr, i + 1);
	}
}
