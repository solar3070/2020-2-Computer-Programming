#include <stdio.h>
#define NUMBER 10
int main(void)
{
	int a[NUMBER], b[NUMBER] = { 0 };
	int i;

	for (i = 0; i < NUMBER; i++)
		scanf("%d", &a[i]);

	// ���⿡ �ڵ� �ۼ� b�� �̿� ������ ���� �ִ´�
	for (i = 0; i < NUMBER; i++) {
		if (i - 1 >= 0)
			b[i - 1] += a[i];
		if (i + 1 < NUMBER)
			b[i + 1] += a[i];
	}
	for (i = 0; i < NUMBER; i++)
		printf("%d ", b[i]);
	printf("\n");
}