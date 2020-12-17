#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strToNum(char *s) // 이 함수만 제출
{
	int n = 0;

	while (*s) {
		if (isdigit(*s))
			n = n * 10 + (*s) - '0';
		else
			return 0;
		s++;
	}
	return n;
}

int main(void) // main은 제공
{
	char str[50];
	
	scanf("%s", str);
	printf("%d\n", strToNum(str));
}
