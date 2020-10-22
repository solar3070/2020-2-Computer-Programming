#include <stdio.h>
int is_same(char w1[], char w2[])
{
	int i;

	for (i = 0; w1[i] != '\0' || w2[i] != '\0'; i++)
		if (w1[i] != w2[i])
			return 0;
	return 1;
}

int main(void)
{
	char word1[10], word2[10];

	printf("Enter the first word: ");
	scanf("%s", word1);
	printf("Enter the second word: ");
	scanf("%s", word2);

	if (is_same(word1, word2))
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");
}