#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i, max;

	srand(time(NULL));

	printf("Enter the number of random numbers:(<=100): ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		data[i] = rand() % 100;

	max = data[0];
	for (i = 1; i < num; i++)
		if (data[i] > max)
			max = data[i];

	printf("최대값은 %d\n", max);
	printf("--------------------------------------------\n");
	printf("발생된 난수는\n");
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");
	}
	printf("\n");
	return 0;
}