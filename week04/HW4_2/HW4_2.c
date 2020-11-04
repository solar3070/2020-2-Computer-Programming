#include <stdio.h>
int fibo(int n);

int main(void)
{
	int n, idx;
	printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����):");
	scanf("%d", &n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	int f1 = 1, f2 = 1;
	int i, sum = 0;

	if (n == 0 || n == 1)
		return 1;

	for (i = 2; i <= n; i++) {
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}
	return sum;
} 