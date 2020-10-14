#include <stdio.h>
#include <string.h>
// ���ڿ� w2 �� ���ڿ� w1 �� start ��ġ�� ������ 1 ��, �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int is_word_in_word(char w1[], int start, char w2[])
{
	int i;

	for (i = start; i < start + strlen(w2); i++)
		if (w1[i] != w2[i - start])
			return 0;
	return 1;
}

int main(void) // main �� �������� ���� ����Ѵ�. ����� ����
{
	char s1[20], s2[20];
	int i, j;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
} 