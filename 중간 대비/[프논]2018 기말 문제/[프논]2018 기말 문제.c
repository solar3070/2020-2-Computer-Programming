#include <stdio.h>

void mergeString(char c[], char a[], char b[])
{
	int aIdx = 0, bIdx = 0, cIdx = 0;

	while (a[aIdx] != '\0' && b[bIdx] != '\0')
		if (a[aIdx] < b[bIdx])
			c[cIdx++] = a[aIdx++];
		else
			c[cIdx++] = b[bIdx++];

	while (a[aIdx] != '\0')
		c[cIdx++] = a[aIdx++];
	while (b[bIdx] != '\0')
		c[cIdx++] = b[bIdx++];
	c[cIdx] = '\0';
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
} 