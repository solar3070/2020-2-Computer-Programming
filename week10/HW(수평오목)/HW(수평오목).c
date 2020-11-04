#include <stdio.h>
#define BOARD_SIZE 10

void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n     ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i;
	int count = 1;

	for (i = 1; b[r][c - i] == b[r][c]; i++)
		count++;
	for (i = 1; b[r][c + i] == b[r][c]; i++)
		count++;

	if (count == 5) 
		return 1;
	else 
		return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int winner = 0;

	for(i =0; i < BOARD_SIZE ; i++ )
		for(j = 0 ; j < BOARD_SIZE ; j++ )
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(За ї­):", turn);
		scanf("%d %d", &r, &c);
		if (board[r][c] == ' ') {
			board[r][c] = turn;
			display(board);
			count++;
		}
		if (winCheck(board, r, c)) {
			printf("Player %c wins!\n", turn);
			winner = 1;
			break;
		}
		if (count % 2 == 0)
			turn = 'O';
		else
			turn = 'X';
	} while(count <= BOARD_SIZE * BOARD_SIZE);
	if (!winner)
		printf("Nobody wins!\n");
}