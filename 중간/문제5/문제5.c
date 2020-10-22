#include <stdio.h>
void mergeStringOneByOne(char c[], char a[], char b[]) // �� �Լ��� �ۼ�
{
	int i = 0, j = 0, k = 0;

	while (a[i] != '\0' && b[j] != '\0')
		if (k % 2 == 0)
			c[k++] = a[i++];
		else
			c[k++] = b[j++];

	while (a[i] != '\0')
		c[k++] = a[i++];
	while (b[j] != '\0')
		c[k++] = b[j++];
	c[k] = '\0';
}

int main(void) // �������� ����
{
	char word1[10];
	char word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeStringOneByOne(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}