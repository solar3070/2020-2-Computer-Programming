#include <stdio.h>
int main(void)
{
	int list[10] = {10, 20, 30, 40, 50, 40, 30, 20, 10, 0};
	int value;
	int keyIndex;

	printf("���� %d\n", sumList(list, 10));
	printf("���� ū ���� %d\n", maxList(list, 10));
	printf("Ž���� ����? ");
	scanf("%d", &value);

	// value �� list �� �ִ°��� �Ǻ��Ͽ� "����" Ȥ�� "**°�� �ִ�"�� ���
	keyIndex = indexSearch(list, 10, value);
	if (keyIndex)
		printf("�� %d�� ���� ù ��° ���� %d��°�� �ս��ϴ�\n", value, keyIndex + 1);
	else
		printf("����\n");

	return 0;
} 

//sumList �� ����
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}

// ���� ū ���� ��ȯ�Ѵ�.
int maxList(int arr[], int size)
{
	int i, big;

	big = arr[0];
	for (i = 1; i < size; i++)
		if (arr[i] > big)
			big = arr[i];

	return big;
}

//key �� ������ -1 �� ������ �� �ε����� ��ȯ�Ѵ�.
int indexSearch(int arr[], int size, int key)
{
	int i;

	for (i = 0; i < size; i++)
		if (arr[i] == key)
			return i;
	return -1;
} 