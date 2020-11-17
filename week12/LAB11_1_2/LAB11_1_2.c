#include <stdio.h>
#include <stdlib.h>

// 1) typedef���� ����ü Ÿ�� Score �����϶�.
typedef struct {
	int midterm, final;
} Score;

void printScore(Score *p) //2)
{
	printf("�߰���� ������ %d\n", p->midterm);
	printf("�б⸻��� ������ %d\n", p->final);
}

Score *biggerScore(Score *p1, Score *p2) //3)
{
	return p1->midterm + p1->final > p2->midterm + p2->final ? p1 : p2;
}

void totalScore(Score *p1, Score *p2, Score *tp) //4)
{
	tp->midterm = p1->midterm + p2->midterm;
	tp->final = p1->final + p2->final;
}

Score createScore(int m, int f) //5)
{
	Score s;
	s.midterm = m;
	s.final = f;
	return s;
}

int main(void) 
{
	Score s1, s2, temp;

	s1.midterm = 50; s1.final = 100;
	s2.midterm = 70; s2.final = 70;

	printf("1)-----------------------------\n");
	printScore(&s1);
	printScore(&s2);

	printf("2)-----------------------------\n");
	printf("���� ������ ���� ����:\n");
	printScore(biggerScore(&s1, &s2));

	printf("3)-----------------------------\n");
	printf("�� ������ �� ��:\n");
	totalScore(&s1, &s2, &temp);
	printScore(&temp);

	printf("4)-----------------------------\n");
	temp = createScore(99, 99);
	printScore(&temp);
} 