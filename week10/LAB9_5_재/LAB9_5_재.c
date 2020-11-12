#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char str[50];
	int i;
	char *name, *age;

	printf("이름(공백없이 알파벳들로 구성)과 나이를 입력하라(예: Abba 50):");
	gets(str);

	puts("입력한 정보: ");
	puts(str); 

	name = strtok(str, " ");
	age = strtok(NULL, "\n\0"); //\n\0으로 써주는 게 더 정확

	printf("이름은 %s 이고 한국 나이는 %s 입니다.\n", name, age);
	printf("10 년 후에는 %d 살입니다.\n", atoi(age));
} 