#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char number[15];
	char year[5] = "19";
	char gender[2];

	printf("�ֹε�Ϲ�ȣ �Է�('-'����): ");
	scanf("%s", number);

	printf("����� %s�⵵ ���̱���.\n", strncat(year, number, 2));
	
	gender[0] = number[7];
	gender[1] = '\0';
	if (!strcmp(gender, "2")) {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 84);
	}
	else {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 77);
	}
}