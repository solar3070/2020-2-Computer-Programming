#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
// typedef����Ͽ� Student ����
typedef struct student Student;

struct cClass {
	int num;
	Student s[40];
};
// typedef����Ͽ� CClass ����
typedef struct cClass CClass;

void printStudent(Student *sp)
{
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}

// Student ����ü ������ name, midterm, final�� �д´�. 
void readStudentScore(Student *sp)
{
	printf("Enter student name: ");
	scanf("%s", sp->name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &sp->midterm, &sp->final);
}

// Student ����ü ������ average ���� ����Ѵ�. average = (midterm + final) / 2
void calculateStudentAverage(Student *sp) 
{
	sp->average = (sp->midterm + sp->final) / 2;
}

int main(void)
{
	CClass cp;
	int i;
	Student all = {"Total", 0, 0, 0};

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	//a)
	for (i = 0; i < cp.num; i++)
		readStudentScore(&cp.s[i]);

	//b)
	for (i = 0; i < cp.num; i++)
		calculateStudentAverage(&cp.s[i]);

	printf("\n �̸�\t �߰�\t �б⸻\t ���\n");
	for (i = 0; i < cp.num; i++)
		printStudent(&cp.s[i]);
}