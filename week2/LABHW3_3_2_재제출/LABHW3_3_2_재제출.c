#define SIZE 10
#include <stdio.h>

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) 
{
	int seatChoice;
	int seats[SIZE] = {0};

	printf("******�¼� ���� �ý���******\n");
	printSeats(seats, SIZE);

	while (!seats[SIZE - 1])
	{
		seatChoice = askReservation();
		processReservation(seats, SIZE, seatChoice);
		printSeats(seats, SIZE);
	}
}

int askReservation()
{
	int people;

	printf("�¼��� �����Ͻðڽ��ϱ�?(�� ��) ");
	scanf("%d", &people); 

	return people;
}

void processReservation(int s[], int size, int seatNumber)
{
	int i, j;

	for (i = 0; i < size; i++) 
		if (s[i] == 0) {
			for (j = i; j < i + seatNumber; j++) 
				s[j] = 1;
			return;
		}
}

void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n"); 
	for (i = 0; i < size; i++)
	printf("%2d", s[i]);
	printf("\n"); 
}

/* ������ ���� ����

���� ��� ���� �ʿ�x
printSeats ȣ�� processReservation���� main���� �̵�
*/