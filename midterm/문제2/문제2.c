#include <stdio.h>

int addEachEvenRec(int n) // �� �Լ��� �ۼ�
{
	if (n == 0)
		return 0;

	if (n % 2 == 0)
		return n % 10 + addEachEvenRec(n / 10);
	else
		return addEachEvenRec(n / 10);
}

int main(void) // �������� ����
{
	int num;
	scanf("%d", &num);
	printf("%d\n", addEachEvenRec(num));
}