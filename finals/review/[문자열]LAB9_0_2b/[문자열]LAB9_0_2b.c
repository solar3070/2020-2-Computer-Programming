#include <stdio.h>
#include <ctype.h> 

int main(void)
{
	char c;
	printf("Enter characters(^Z for exit):\n");

	while ((c = fgetc(stdin)) != EOF)
		if (isupper(c))
			fputc(tolower(c), stdout);
		else
			fputc(toupper(c), stdout);
}  