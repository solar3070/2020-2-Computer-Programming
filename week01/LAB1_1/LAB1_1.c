#include <stdio.h>
int main(void)
{
	int num[5];
	int i, total = 0, average;

	for (i = 0; i < 5; i++) {
		printf("Enter %dth number: ", i + 1);
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 5; i++)
		total += num[i];
	average = total / 5;

	printf("---------------------------------\n");
	printf("ÃÑÇÕÀº %d\n", total);
	printf("Æò±ÕÀº %d\n", average);
	printf("---------------------------------\n");

	for (i = 0; i < 5; i++)
		printf("array[%d] : %d\n", i, num[i]);

	return 0;
}