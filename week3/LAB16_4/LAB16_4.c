#include <stdio.h>
int main(void)
{
	int test[4][3] = {{8, 7}, {6, 5}, {1, 2}, {3, 4}};
	int i, j, total = 0, max;
	double average;

	printf("�迭 test�� ������Ʈ�� ����մϴ�\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}
	printf("\n");

	for (i = 0; i < 4; i++)
		test[i][2] = -1;

	printf("\n��>\n");
	printf("�迭 test�� ������Ʈ�� ����մϴ�\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d��° row: ", i + 1);
		for (j = 0; j < 3; j++) {
			printf("%5d", test[i][j]);
			total += test[i][j];
		}
	}
	printf("\n");

	printf("\n��>\n");
	average = (double)total / 12;
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", average);

	printf("\n��>\n");
	for (i = 0; i < 4; i++) {
		max = test[i][0];
		for (j = 1; j < 3; j++) 
			if (max < test[i][j])
				max = test[i][j];
		printf("\n%d��° row������ �ִ밪: %d", i + 1, max);
		total += max;
	}
	printf("\n�ִ밪�� ��: %d\n", total);
}