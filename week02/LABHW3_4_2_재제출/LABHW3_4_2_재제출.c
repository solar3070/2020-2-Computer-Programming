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

int is_duplicate(int arr[], int size, int n)
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
	int i = 0, num;

	while (i < 5) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &num);

		if (is_duplicate(arr, i + 1, num)) 
			printf("%d는 이미 집합에 있음\n", num);
		else {
			arr[i] = num;
			printSet(arr, i + 1);
			i++;
		}
	}
}

/* 재제출 변경 사항

is_duplicate 호출시 전달 사이즈 5에서 i + 1로 변경
main 반복문 for문에서 while문으로 변경
*/