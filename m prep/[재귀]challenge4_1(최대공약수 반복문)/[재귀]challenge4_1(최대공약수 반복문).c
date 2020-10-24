#include <stdio.h>

int gcd(int x, int y)
{
	int r;

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a < b) {
		big = b;
		small = a;
	}
	else {
		big = a;
		small = b;
	}
	printf("%d�� %d�� �ִ������� %d\n", a, b, gcd(big, small));
}