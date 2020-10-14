#include <stdio.h>

#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL isPalindrome(char str[]);

int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);

	return 0;
}

BOOL isPalindrome(char s[])
{
	int i, len;
	for (len = 0; s[len] != '\0'; len++);

	for (i = 0; i < len / 2; i++)
		if (s[i] != s[len - i - 1])
			return FALSE;
	return TRUE;
} 