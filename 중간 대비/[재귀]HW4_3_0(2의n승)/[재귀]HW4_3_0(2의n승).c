#include <stdio.h>

int twoPower(int x)
{
	if (x == 0)
		return 1;
	else
		return twoPower(x - 1) * 2;
}

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("2�� %d���� %d�̴�\n", n, twoPower(n));
}