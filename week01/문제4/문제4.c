#include <stdio.h>
#include <string.h>
// ch가 w안에 있으면 1을, 없으면 0을 반환한다
int is_in(char w[], char ch) // 사용 안해도 됨
{
	int i;

	for (i = 0; i < strlen(w); i++)
		if (w[i] == ch)
			return 1;
	return 0;
}

int main(void)
{
	char word[20];
	char i;

	scanf("%s", word);

	for (i = 'A'; i <= 'Z'; i++)
		if (!is_in(word, i))
			printf("%c", i);
}