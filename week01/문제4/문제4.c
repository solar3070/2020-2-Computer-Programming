#include <stdio.h>
#include <string.h>
// ch�� w�ȿ� ������ 1��, ������ 0�� ��ȯ�Ѵ�
int is_in(char w[], char ch) // ��� ���ص� ��
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