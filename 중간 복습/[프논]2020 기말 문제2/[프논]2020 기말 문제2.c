#include <stdio.h>
int is_prime(int num)
{
	int i;

	for (i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	int a[20], p[20], np[20]; // p는 소수를 np는 소수아닌 수를 담을 배열
	int i, n;
	int pIdx = 0, npIdx = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
		if (is_prime(a[i]))
			p[pIdx++] = a[i];
		else
			np[npIdx++] = a[i];

	for (i = 0; i < pIdx; i++)
		printf("%d ", p[i]);
	for (i = 0; i < npIdx; i++)
		printf("%d ", np[i]);
} 