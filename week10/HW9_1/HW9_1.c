#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char string[50]; // 입력되는 문자열을 저장
	char alphaString1[50]; // 입력문자열에서 알파벳만 저장
	char alphaString2[50]; // 대소문자를 바꿈
	char digitString[50];
	char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열
	int i, j = 0, k = 0;

	printf("문자열을 입력하세요:");
	fgets(string, 50, stdin);

	for (i = 0; string[i] != '\n'; i++)
		if (isdigit(string[i]))
			digitString[j++] = string[i];
		else
			alphaString1[k++] = string[i];
	digitString[j] = '\0';
	alphaString1[k] = '\0';
	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	for (i = 0; i < strlen(alphaString1); i++)
		if (isupper(alphaString1[i]))
			alphaString2[i] = tolower(alphaString1[i]);
		else
			alphaString2[i] = toupper(alphaString1[i]);
	alphaString2[i] = '\0';
	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);

	strcpy(convertedString, strcat(alphaString1, digitString));
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);
} 