#include <stdio.h>

void to_binary(int n)
{
	if (n == 0)
		return;

	to_binary(n / 2);
	printf("%d ", n % 2);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	to_binary(n);
}