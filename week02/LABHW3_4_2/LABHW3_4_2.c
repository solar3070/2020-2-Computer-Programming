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

int is_duplicate(int arr[], int n, int size)
{
	int i;

	for (i = 0; i < size; i++) 
		if (arr[i] == n)
			return 1;
	
	return 0;
}

int main(void)
{
	int arr[5] = {0};
	int i, num;

	for (i = 0; i < 5; i++) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &num);

		if (is_duplicate(arr, num, 5)) {
			printf("%d는 이미 집합에 있음\n", num);
			i--;
		}
		else {
			arr[i] = num;
			printSet(arr, i + 1);
		}
	}
}
