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

void printClass(CClass *cp)
{
	int i;

	for (i = 0; i < cp->num; i++) {
		printf("%s\t", cp->s[i].name);
		printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
	}
}

// Student ����ü ������ name, midterm, final�� �д´�. 
void readClass(CClass *cp)
{
	int i;

	for (i = 0; i < cp->num; i++) {
		printf("Enter student name: ");
		scanf("%s", cp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
	}
}

// Student ����ü ������ average ���� ����Ѵ�. average = (midterm + final) / 2
void calculateClassAverage(CClass *cp)
{
	int i;

	for (i = 0; i < cp->num; i++) 
		cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
}

int main(void)
{
	CClass cp;

	Student all = {"Total", 0, 0, 0};

	printf("Enter a number of student:");
	scanf("%d", &cp.num);

	readClass(&cp); // �� �ڵ��� a)�κ� ��ġ

	calculateClassAverage(&cp); // �� �ڵ��� b)�κ� ��ġ

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	printClass(&cp);
}