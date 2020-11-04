#include <stdio.h>

int is_word_in_word(char w[], int start, char w2[])
{
	int i, j = 0;
	for (i = start; w[i] != '\0'; i++) {
		if (w2[j] == '\0')
			return 1;
		if (w[i] != w2[j])
			return 0;
		j++;
	}
	if (w2[j] != '\0')
		return 0;
	else 
		return 1;
}

int main(void)
{
	char s1[30], s2[30];
	int i, j;
	int s2len;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s2[i] != '\0'; i++);
	s2len = i;

	for (i = 0; s1[i] != '\0'; i++) 
		if (s1[i] == s2[0]) 
			if (is_word_in_word(s1, i, s2)) {
				for (j = i; s1[j + s2len] != '\0'; j++)
					s1[j] = s1[j + s2len];
				i = j;
				break;
			}
	s1[i] = '\0';

	printf("%s\n", s1); // 변경하지 말라
}