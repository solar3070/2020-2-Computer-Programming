// ������ �ڵ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char id[50];
	char birthYear[50]; // ���ڿ��� ������ ����
	int year; // ���ڷ� ������ ����

	printf("�ֹε�Ϲ�ȣ �Է�('-'����): ");
	gets(id);

	strcpy(birthYear, "19");
	strncat(birthYear, id, 2);
	year = atoi(birthYear);

	printf("����� %s�⵵ ���̱���.\n", birthYear);
	
	if (id[7] == '2') {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 84);
	}
	else {
		printf("���ں��̽ñ���.\n");
		printf("��� ���� 77�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 77);
	}
}