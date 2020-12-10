#include <stdio.h>

int stringEqual(char *s1, char *s2)
{
	while (*s1 || *s2) {
		if (*s1 != *s2)
			return -1;
		s1++;
		s2++;
	}
	return 0;
}

int main(void)
{
	char string1[50];
	char string2[50];

	printf("Enter the first string:");
	scanf("%s", string1);
	printf("Enter the second string:");
	scanf("%s", string2);

	if (stringEqual(string1, string2) == 0)
		printf("�ΰ��� ���ڿ��� ����\n");
	else
		printf("�ΰ��� ���ڿ��� �ٸ���\n");
} 