#define SIZE 10
#include <stdio.h>

int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) 
{
	int seatChoice;
	int seats[SIZE] = {0};

	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);

	while (!seats[SIZE - 1])
	{
		seatChoice = askReservation();
		processReservation(seats, SIZE, seatChoice);

		while (getchar() != '\n'); // 버퍼 비움
	}
}

int askReservation()
{
	int people;

	printf("좌석을 예약하시겠습니까?(몇 명) ");
	scanf("%d", &people); 

	return people;
}

void processReservation(int s[], int size, int seatNumber)
{
	int i, j;

	for (i = 0; i < size; i++) 
		if (s[i] == 0) {
			for (j = i; j < i + seatNumber; j++) {
				if (j >= size) {
					printf(">>>%d명은 예약 안됨\n", i + seatNumber - size);
					return;
				}
				s[j] = 1;
			}
			printSeats(s, size);
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