#include <stdio.h>

int checking(char w0[], char w[])
{
	int i, len;
	for (len = 0; w0[len] != '\0'; len++);

	for (i = 0; i < len; i++)
		if (w0[i] != w[i])
			return 0;
	return 1;
}

int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));
} 