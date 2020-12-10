#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char string[50]; // 입력되는 문자열을 저장
	char alphaString1[50]; // 입력문자열에서 알파벳만 저장
	char alphaString2[50]; // 대소문자를 바꿈
	char digitString[50];
	char convertedString[50]; // 문자들과 숫자들로 재배열한 문자열
	int i, j = 0, k = 0;
	char c;

	printf("문자열을 입력하세요:");
	fgets(string, sizeof(string), stdin);

	for (i = 0; c = string[i]; i++) {
		if (isalpha(c))
			alphaString1[j++] = c;
		else if (isdigit(c))
			digitString[k++] = c;
	}
	alphaString1[j] = '\0';
	digitString[k] = '\0';

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	j = 0;
	for (i = 0; c = alphaString1[i]; i++) 
		if (isupper(c))
			alphaString2[j++] = tolower(c);
		else
			alphaString2[j++] = toupper(c);
	alphaString2[j] = '\0';

	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);

	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);
} 