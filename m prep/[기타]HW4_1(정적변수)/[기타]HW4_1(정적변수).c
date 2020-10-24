#include <stdio.h>

void save(int money)
{
	static int account;

	account += money;
	printf("현재까지의 입금액 %d\n", account);
}

int main(void)
{
	int money;

	printf("저금할 금액(-1 for exit): ");
	scanf("%d", &money);

	while(money != -1)
	{
		save(money);

		printf("저금할 금액(-1 for exit): ");
		scanf("%d", &money);
	}
}