#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char string[50]; // �ԷµǴ� ���ڿ��� ����
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
	char digitString[50];
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�
	int i, j = 0, k = 0;
	char c;

	printf("���ڿ��� �Է��ϼ���:");
	fgets(string, sizeof(string), stdin);

	for (i = 0; c = string[i]; i++) {
		if (isalpha(c))
			alphaString1[j++] = c;
		else if (isdigit(c))
			digitString[k++] = c;
	}
	alphaString1[j] = '\0';
	digitString[k] = '\0';

	printf("���ڵ��� %s\n", alphaString1);
	printf("���ڵ��� %s\n", digitString);

	j = 0;
	for (i = 0; c = alphaString1[i]; i++) 
		if (isupper(c))
			alphaString2[j++] = tolower(c);
		else
			alphaString2[j++] = toupper(c);
	alphaString2[j] = '\0';

	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);

	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
} 