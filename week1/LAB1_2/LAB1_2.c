#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i, big;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<=100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 100;

	big = data[0];
	for (i = 1; i < num; i++)
		if (data[i] > big)
			big = data[i];

	printf("최대값은 %d\n", big);
	printf("--------------------------------------------\n");
	printf("발생된 난수는");

	for (i = 0; i < num; i++) {
		if (i % 5 == 0)
			printf("\n");
		printf("%5d", data[i]);
	}
	printf("\n");

	return 0;
}