#include <stdio.h>

int get_cycle_number(int n)
{
	int count = 1;

	while (n != 1) {
		printf("%d ", n);

		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		count++;
	}
	return count;
}

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("\n%d\n", get_cycle_number(n));
}