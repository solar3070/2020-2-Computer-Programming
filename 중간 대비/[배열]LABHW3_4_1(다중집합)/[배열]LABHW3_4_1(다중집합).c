#include <stdio.h>

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
	int i;

	for (i = 0; i < 5; i++) {
		printf("�������տ� �߰��� ����: ");
		scanf("%d", &arr[i]);
			
		printSet(arr, i + 1);
	}
}

