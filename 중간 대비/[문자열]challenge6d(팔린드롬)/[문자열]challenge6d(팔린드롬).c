#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL isPalindrome(char s[])
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++);

	for (i = 0; i < len / 2; i++)
		if (s[i] != s[len - 1 - i])
			return FALSE;
	return TRUE;
} 

int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome 체크\n\n");
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str)) // Palindrome 검사
		printf("\"%s\" is a Palindrome\n\n", str); 
	else
	printf("\"%s\" isn't a Palindrome\n\n", str);

	return 0;
}