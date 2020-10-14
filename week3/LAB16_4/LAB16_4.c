#include <stdio.h>
int main(void)
{
	int test[4][3] = {{8, 7}, {6, 5}, {1, 2}, {3, 4}};
	int i, j, total = 0, max;
	double average;

	printf("배열 test의 엘리먼트를 출력합니다\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	}
	printf("\n");

	for (i = 0; i < 4; i++)
		test[i][2] = -1;

	printf("\n다>\n");
	printf("배열 test의 엘리먼트를 출력합니다\n");
	for (i = 0; i < 4; i++)
	{
		printf("\n%d번째 row: ", i + 1);
		for (j = 0; j < 3; j++) {
			printf("%5d", test[i][j]);
			total += test[i][j];
		}
	}
	printf("\n");

	printf("\n라>\n");
	average = (double)total / 12;
	printf("Total is %d\n", total);
	printf("Average is %.2f\n", average);

	printf("\n마>\n");
	for (i = 0; i < 4; i++) {
		max = test[i][0];
		for (j = 1; j < 3; j++) 
			if (max < test[i][j])
				max = test[i][j];
		printf("\n%d번째 row에서의 최대값: %d", i + 1, max);
		total += max;
	}
	printf("\n최대값의 합: %d\n", total);
}