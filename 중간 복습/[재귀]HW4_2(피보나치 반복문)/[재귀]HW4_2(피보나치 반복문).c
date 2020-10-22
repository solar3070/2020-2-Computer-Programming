#include <stdio.h>

int fibo(int n)
{
	int f, f0 = 1, f1 = 1;
	int i;

	if (n == 0 || n == 1)
		return 1;
	else {
		for (i = 2; i <= n; i++) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		return f;
	}
}

int main(void)
{
	int n, idx;

	printf("몇 개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++) {
		printf("%10d ", fibo(idx));
		if ((idx + 1) % 5 == 0) // 한줄에 5개씩 출력
			printf("\n");
	}
	printf("\n");
} 