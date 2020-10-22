#include <stdio.h>
#include <stdlib.h>

void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // ��� ���࿡ ����� ���� ����

int main(void)
{
	srand(200);
	generateData();
	printf("�߻��� 10���� ����:\n");
	printData();
	printf("10�� ������ �� = %d \n", totalData());
	printf("10�� ������ ���� ū �� = %d \n", maxData());
} 

// generateData �Լ��� data[0]..data[9]�� ������ �ִ´�.
void generateData()
{
	int k;
	int *p;
	p = data; //Ȥ�� p = &data[0]
	for (k = 0; k < 10; k++) // Index 0..99���� ������ �ο�
		*p++ = rand() % 100;
}

// printData �Լ��� data[0]..data[9]�� ���� ����Ѵ�.
void printData()
{
	int *pi = data;
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", *pi++);
	printf("\n");
}

// totalData �Լ��� data[0]���� data[9]������ ���� ��� ���� �� ����� ��ȯ�Ѵ�.
int totalData()
{
	int *pi = data, sum = 0;
	int i;
	for (i = 0; i < 10; i++)
		sum += *pi++;
	return sum;
} 

int maxData()
{
	int *pi = data, max = *pi, i;
	for (i = 1; i < 10; i++)
		if (*++pi > max)
			max = *pi;
	return max;
}