#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char string[50]; // �ԷµǴ� ���ڿ��� ����
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
	char digitString[50];
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�
	int i, j = 0, k = 0;

	printf("���ڿ��� �Է��ϼ���:");
	fgets(string, 50, stdin);

	for (i = 0; string[i] != '\n'; i++)
		if (isdigit(string[i]))
			digitString[j++] = string[i];
		else
			alphaString1[k++] = string[i];
	digitString[j] = '\0';
	alphaString1[k] = '\0';
	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

	for (i = 0; i < strlen(alphaString1); i++)
		if (isupper(alphaString1[i]))
			alphaString2[i] = tolower(alphaString1[i]);
		else
			alphaString2[i] = toupper(alphaString1[i]);
	alphaString2[i] = '\0';
	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);

	strcpy(convertedString, strcat(alphaString1, digitString));
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
} 