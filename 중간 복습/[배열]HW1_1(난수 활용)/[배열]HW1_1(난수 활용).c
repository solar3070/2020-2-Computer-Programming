#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100], count[10] = {0};
	int num, i, max = INT_MIN;

	srand(time(NULL)); 

	printf("Enter the number of random numbers:(<= 100): ");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++) {
		data[i] = rand() % 10;

		count[data[i]]++;
	}

	for (i = 0; i < 10; i++) 
		printf("%d�� ������ %d\n", i, count[i]);

	printf("------------------------------------------\n");
	printf("�߻��� ������\n", max);
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]); 
		if (i % 5 == 4)
			printf("\n");
	}
	return 0;
}