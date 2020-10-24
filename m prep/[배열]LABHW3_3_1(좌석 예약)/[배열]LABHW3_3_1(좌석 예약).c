#include <stdio.h>
#define SIZE 10
char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) // �������� ����
{
	int seatChoice;
	int seats[SIZE] = {0};

	printf("******�¼� ���� �ý���******\n");
	while (askReservation() == 'y')
	{
		printSeats(seats, SIZE);

		printf("���° �¼�? ");
		scanf("%d", &seatChoice);

		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n'); // ���� ���
	}
}

char askReservation()
{
	char choice;

	printf("\n�¼��� �����Ͻðڽ��ϱ�?(y/n) ");
	scanf("%c", &choice); 
	
	return choice;
}

void processReservation(int s[], int size, int seatNumber)
{
	int i;

	if (!s[seatNumber - 1]) {
		s[seatNumber-1] = 1;
		printf("����Ǿ����ϴ�.\n"); 

		printSeats(s, size);
	}
	else
		printf("�̹� ����� �ڸ��Դϴ�.\n"); 
}

void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n"); 
	for(i = 0; i < SIZE; i++)
		printf("%2d", s[i]);
	printf("\n"); 
}