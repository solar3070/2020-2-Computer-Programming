#include <stdio.h>
int main(void)
{
	int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	int arr2[4][2];
	int arr3[8];
	int i, j; // �� �̻��� �ε��� ������ ��� ����.

	/* �̵�(����) A -> B */
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr2[j][i] = arr1[i][j];

	/* �̵�(����) A -> C*/
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arr3[(i * 4) + j] = arr1[i][j];
	
	/* A, B, C ��� */
	printf("--�迭 A\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", arr1[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("--�迭 B\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++)
			printf("%4d", arr2[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("--�迭 C\n");
	for (i = 0; i < 8; i++)
			printf("%4d", arr3[i]);
		printf("\n");

	return 0;
}