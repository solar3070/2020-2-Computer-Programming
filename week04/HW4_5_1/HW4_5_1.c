#include <stdio.h>

int get_cycle_number(int n)
{
	int count = 1;

	while (1) {
		printf("%d ", n);

		if(n == 1)
			return count;

		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		count++;
	}	
}

int main(void)
{
	int n;

	printf("n�� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("\n����Ŭ ���̴� %d\n", get_cycle_number(n));
}