#include <stdio.h>

void save(int money);
static int acc = 0;

int main(void)
{
	int money;

	printf("������ �ݾ�(-1 for exit):");
	scanf("%d", &money);
	while (money != -1)
	{
		save(money);
		printf("������ �ݾ�(-1 for exit):");
		scanf("%d", &money);
	}

	printf("�Ա� �Ϸ� \n");
	return 0;
}

void save(int money)
{
	acc += money;
	printf("��������� �Աݾ� %d \n", acc);
}