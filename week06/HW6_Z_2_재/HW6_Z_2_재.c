#include <stdio.h>

// ���ڿ� w2 �� ���ڿ� w1 �� start ��ġ�� ������ 1 ��, �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int is_word_in_word(char w1[], int start, char w2[])
{
	int i;
	for (i = 0; i < w2[i] != '\0'; i++)
		if (w1[start] != w2[i])
			return 0;
		else
			start++;
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