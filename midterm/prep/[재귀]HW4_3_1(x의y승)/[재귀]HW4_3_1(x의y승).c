#include <stdio.h>

int xPower(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return xPower(x, y - 1) * x;
}

int main(void)
{
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);

	printf("%d�� %d���� %d�̴�\n", x, y, xPower(x, y));
} 