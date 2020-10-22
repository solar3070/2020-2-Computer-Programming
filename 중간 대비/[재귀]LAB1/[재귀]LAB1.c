#include <stdio.h>

int sum(int n)
{
	int total;

	if (n == 0)
		return 0;
	else {
		total = n * 10 + 2 + sum(n - 1);
		printf("%d ", n * 10 + 2);
		return total;
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);

	printf("\n%d\n", sum(n));
}