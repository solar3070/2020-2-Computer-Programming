#include <stdio.h>
int printArray(int arr[][4], int size) // �������� ����
{
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			if (j < 3)
				printf("%d ", arr[i][j]);
			else
				printf("%d", arr[i][j]);
		printf("\n");
	}
}

void initArray(int a[][4], int size, int num) // ���⸦ �ۼ�
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = i + (j * num);
}

int main(void) // �������� ����
{
	int i, j;
	int a[4][4], b[4][4];
	int n;
	scanf("%d", &n);
	initArray(a, 4, n);
	printArray(a, 4);
}