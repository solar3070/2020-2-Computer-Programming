#include <stdio.h>

void save(int money)
{
	static int account;

	account += money;
	printf("��������� �Աݾ� %d\n", account);
}

int main(void)
{
	int money;

	printf("������ �ݾ�(-1 for exit): ");
	scanf("%d", &money);

	while(money != -1)
	{
		save(money);

		printf("������ �ݾ�(-1 for exit): ");
		scanf("%d", &money);
	}
}