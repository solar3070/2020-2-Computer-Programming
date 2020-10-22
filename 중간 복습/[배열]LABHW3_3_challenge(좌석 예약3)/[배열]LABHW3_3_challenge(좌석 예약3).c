#include <stdio.h>
#define SIZE 10
char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) 
{
	int n;
	int seats[SIZE] = {0};

	printf("******�¼� ���� �ý���******\n");
	printSeats(seats, SIZE);

	while (!seats[SIZE - 1]) {
		n = askReservation();
		processReservation(seats, SIZE, n);
		printSeats(seats, SIZE);
	} 
}

char askReservation()
{
	int n;

	printf("\n�¼��� �����Ͻðڽ��ϱ�?(�� ��) ");
	scanf("%d", &n); 
	
	return n;
}

void processReservation(int s[], int size, int n)
{
	int i, j;

	for (i = 0; i < size; i++)
		if (!s[i]) {
			for (j = i; j < i + n; j++) {
				if (j == size) {
					printf(">>>%d���� ���� �ȵ�\n", i + n - size);
					return;
				}
				s[j] = 1;
			}
			return;
		}
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