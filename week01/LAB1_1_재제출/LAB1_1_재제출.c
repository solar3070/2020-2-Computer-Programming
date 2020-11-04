#include <stdio.h>
int main(void)
{
	int num[5], i, total = 0;
	double average;

	for (i = 0; i < 5; i++) {
		printf("Enter %dth number: ", i + 1);
		scanf("%d", &num[i]);
		total += num[i];
	}
	average = (double)total / 5;

	printf("---------------------------------\n");
	printf("ÃÑÇÕÀº %d\n", total);
	printf("Æò±ÕÀº %.1f\n", average);
	printf("---------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);
	return 0;
}