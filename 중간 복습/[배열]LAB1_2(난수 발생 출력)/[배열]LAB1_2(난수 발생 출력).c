#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int data[100];
	int num, i, max = INT_MIN;

	srand(time(NULL)); 

	printf("Enter the number of random numbers:(<= 100): ");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++) {
		data[i] = rand() % 100;

		if (data[i] > max)
			max = data[i];
	}

	printf("�ִ밪�� %d\n", max);
	printf("------------------------------------------\n");
	printf("�߻��� ������\n", max);
	for (i = 0; i < num; i++) {
		printf("%5d", data[i]); 
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	return 0;
}