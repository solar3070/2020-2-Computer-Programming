#include <stdio.h>

int is_in(int arr[], int size, int n)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == n)
			return 0;
	return 1;
}

int printSet(int arr[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf(" }\n");
}

int main(void)
{
	int arr[5];
	int i, n;

	i = 0;
	while (i < 5) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &n);
		
		if (!is_in(arr, i + 1, n)) 
			printf("%d는 이미 집합에 있음\n", n);
		else {
			arr[i] = n;
			printSet(arr, i + 1);
			i++;
		}
	}
}