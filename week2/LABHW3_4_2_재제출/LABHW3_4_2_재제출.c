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
		printf("�������տ� �߰��� ����: ");
		scanf("%d", &num);

		if (is_duplicate(arr, i + 1, num)) 
			printf("%d�� �̹� ���տ� ����\n", num);
		else {
			arr[i] = num;
			printSet(arr, i + 1);
			i++;
		}
	}
}

/* ������ ���� ����

is_duplicate ȣ��� ���� ������ 5���� i + 1�� ����
main �ݺ��� for������ while������ ����
*/