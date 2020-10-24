#include <stdio.h>
int main(void)
{
	int num[5];
	int i, sum = 0;
	double average;
	
	for (i = 0; i < 5; i++) {
		printf("Enter %dth number: ", i + 1);
		scanf("%d", &num[i]);

		sum += num[i];
	}
	average = (double)sum / 5;

	printf("---------------------------\n");
	printf("ÃÑÇÕÀº %d\n", sum);
	printf("Æò±ÕÀº %.0f\n", average);
	printf("---------------------------\n");

	for (i = 0; i < 5; i++) 
		printf("array[%d]: %d\n", i, num[i]);
	return 0;
} 