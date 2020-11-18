#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

int main(void)
{
	struct student s[3];
	struct student *sp = s;
	int i, mSum = 0, fSum = 0;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", sp->name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->midterm, &sp->final);

		sp->average = (sp->midterm + sp->final) / 2;

		if (sp->average >= 80)
			sp->grade = 'A';
		else if (sp->average >= 50)
			sp->grade = 'B';
		else
			sp->grade = 'F';

		mSum += sp->midterm;
		fSum += sp->final;
		sp++;
	}

	sp = s;
	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
		sp++;
	}

	sp = s;
	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%c\n", sp->name, sp->grade);
		sp++;
	}

	printf("\n�߰������ ��� = %d\n", mSum / 3);
	printf("�б⸻����� ��� = %d\n", fSum / 3);
}