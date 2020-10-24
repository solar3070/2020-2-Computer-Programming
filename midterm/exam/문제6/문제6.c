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
	// 필요하면 변수 추가

	scanf("%s", s1);
	scanf("%s", s2);

	// 여기에 s1에서 s2를 제거하는 코드를 작성,
	// 필요하면 함수를 정의하고 이를 호출하여 프로그램해도 좋다. 
	deleteWord(s1, s2);
	printf("%s\n", s1); // 변경하지 말라
}