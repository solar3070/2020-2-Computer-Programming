#include <stdio.h>

int mergeString(char c[], char a[], char b[])
{
	int i = 0, j = 0, k = 0;

	while (a[i] != '\0' && b[j] != '\0')
		if (a[i] <= b[j])
			c[k++] = a[i++];
		else 
			c[k++] = b[j++];

	if (a[i] != '\0')
		while (a[i] != '\0')
			c[k++] = a[i++];
	else
		while (b[j] != '\0')
			c[k++] = b[j++];
	c[k] = '\0';
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);;
	printf("%s", mergedWord);
} 