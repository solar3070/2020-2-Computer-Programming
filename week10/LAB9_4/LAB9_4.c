#include <stdio.h>
#include <string.h>
int main(void)
{
	char fullName[50];
	char lastName[50] = "Pak";
	char firstName[50] = "Suehee";

	char id[15] = "630826-2020222"; // 14 ���� ���� + '\0'
	char idFront[7];

	// fullName �� ���� ��, �� �׸��� �̸��� �ִ´�.
	strcpy(fullName, firstName);
	strcat(fullName, ", ");
	strcat(fullName, lastName);
	printf("����� fullname �� %s\n", fullName);

	// idFront �� �ֹε�� ��ȣ�� �� 6 �ڸ��� �ִ´�
	strncpy(idFront, id, 6);
	idFront[6] = '\0';
	printf("�ֹε�Ϲ�ȣ ���ڸ��� %s\n", idFront);
} 