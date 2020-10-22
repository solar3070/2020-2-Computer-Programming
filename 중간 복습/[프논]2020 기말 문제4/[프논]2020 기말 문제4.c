#include <stdio.h>

int is_in(char w[], char ch) 
{
	int i;

	for (i = 0; w[i] != '\0'; i++)
		if (w[i] == ch)
			return 1;
	return 0;
}

int main(void)
{
	char word[20];
	char ch;
	scanf("%s", word);

	for (ch = 'A'; ch <= 'Z'; ch++)
	if (!is_in(word, ch))
		printf("%c", ch);
	printf("\n");
} 