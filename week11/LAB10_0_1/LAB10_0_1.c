#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void)
{
	struct student aStudent[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", aStudent[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &aStudent[i].midterm, &aStudent[i].final);
	}

	printf("\n이름\t중간\t학기말\n");
	for (i = 0; i < 3; i++) 
		printf("%s\t%d\t%d\n", aStudent[i].name, aStudent[i].midterm, aStudent[i].final);
}