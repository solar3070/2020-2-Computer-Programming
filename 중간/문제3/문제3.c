#include <stdio.h>

int char_num(char *p, char c) // �̰��� �ۼ�, p�� ���� �����Ű�鼭 �Լ��� ����
{
	int i, count = 0;
	while (*p != '\0') {
		if (*p == c) 
			count++;
		p++;
	}
	return count;
}

int main(void) // �������� ����
{
	char w[30];
	char* p;
	char ch;
	p = w;

	scanf("%c", &ch);
	scanf("%s", w);

	printf("%d\n", char_num(w, ch));
}