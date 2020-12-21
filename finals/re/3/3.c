#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void splitString(char *str, char *s1, char *s2) // 이 함수만 제출
{
	int i;
	while (*str) {
		for (i = 0; i < 2; i++) {
			if(!*str) break;
			*s1++ = *str++;
		}
		for (i = 0; i < 2; i++) {
			if(!*str) break;
			*s2++ = *str++;
		}
	}
	*s1 = '\0';
	*s2 = '\0';
}

int main(void)
{
	
	char str[50], s1[50], s2[50];
	
	scanf("%s", str);
	splitString(str, s1, s2);
	
	printf("%s\n", s1);
	printf("%s\n", s2);
}