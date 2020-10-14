#include <stdio.h>
int cal_odd_digit(int num)
{
	int i, is_odd, sum = 0;

	while (num) {
		is_odd = num % 10;

		if (is_odd % 2)
			sum += is_odd;

		num /= 10;
	}

	return sum;
}

int main(void) // main�� �������� �ʴ´�. ����� ���� ó��
{
	int n;

	scanf("%d", &n);
	n *= 3;

	printf("%d\n", cal_odd_digit(n));
} 