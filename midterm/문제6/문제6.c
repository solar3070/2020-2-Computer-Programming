#include <stdio.h>

void deleteWord(char s1[], char s2[])
{
	char temp[30];
	int i, j = 0, idx = 0;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] != s2[j])
			temp[idx++] = s1[i];
		else
			j++;

	for (i = 0; i < idx; i++)
		s1[i] = temp[i];
	s1[i] = '\0';
}

int main(void)
{
	char s1[30], s2[30];
	int i, j;
	// �ʿ��ϸ� ���� �߰�

	scanf("%s", s1);
	scanf("%s", s2);

	// ���⿡ s1���� s2�� �����ϴ� �ڵ带 �ۼ�,
	// �ʿ��ϸ� �Լ��� �����ϰ� �̸� ȣ���Ͽ� ���α׷��ص� ����. 
	deleteWord(s1, s2);
	printf("%s\n", s1); // �������� ����
}