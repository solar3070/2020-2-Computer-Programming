#include <stdio.h>

int main(void)
{
	int test[4][3] = {{8, 7}, {6, 5}, {1, 2}, {3, 4}};
	int i, j, sum = 0, max;
	double average;

	printf("배열 test의 엘리먼트를 출력합니다\n"); 
	for (i = 0; i < 4; i++) { 
		printf("\n%d번째 row: " , i + 1);
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	} 
	printf("\n");

	printf("\n다)\n배열 test의 엘리먼트를 출력합니다\n"); 
	for (i = 0; i < 4; i++) { 
		printf("\n%d번째 row: " , i + 1);
		test[i][2] = -1;
		for (j = 0; j < 3; j++)
			printf("%5d", test[i][j]);
	} 
	printf("\n");

	printf("\n라)\n");
	for (i = 0; i < 4; i++)  
		for (j = 0; j < 3; j++)
			sum += test[i][j];
	average = (double)sum / 12;

	printf("Total is %d\n", sum);
	printf("Average is %.2f\n", average);

	sum = 0;
	printf("\n마)\n"); 
	for (i = 0; i < 4; i++) { 
		max = test[i][0];
		for (j = 1; j < 3; j++)
			if (test[i][j] > max)
				max = test[i][j];
		sum += max;
		printf("\n%d번째 row에서의 최대값: %d", i + 1, max);
	} 
	printf("\n최대값의 합: %d\n", sum);
}