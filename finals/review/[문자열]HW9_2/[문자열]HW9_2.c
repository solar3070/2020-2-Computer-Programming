#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char id[15];
	char year[5] = "19";

	printf("�ֹε�Ϲ�ȣ �Է�('-'����): ");
	scanf("%s", id);

	strncat(year, id, 2);
	printf("����� %s�⵵ ���̱���\n", year);

	if (id[7] == '2') {
		printf("���ں��̽ñ���\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�\n", atoi(year) + 84);
	}
	else {
		printf("���ں��̽ñ���\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�\n", atoi(year) + 77);
	}
}