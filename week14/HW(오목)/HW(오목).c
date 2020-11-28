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
	int i, j, count;
	char player = b[r][c];

	// 수평
	count = 1;
	j = c - 1;
	while (j >= 0 && b[r][j] == player) {
		j--;
		count++;
	}
	j = c + 1;
	while (j < BOARD_SIZE && b[r][j] == player) {
		j++;
		count++;
	}
	if (count == 5) return 1;

	// 수직
	count = 1;
	i = r - 1;
	while (i >= 0 && b[i][c] == player) {
		i--;
		count++;
	}
	i = r + 1;
	while (i < BOARD_SIZE && b[i][c] == player) {
		i++;
		count++;
	}
	if (count == 5) return 1;

	// 대각선
	count = 1;
	i = r - 1; 
	j = c + 1;
	while (i >= 0 && j < BOARD_SIZE && b[i][j] == player) {
		i--;
		j++;
		count++;
	}
	i = r + 1;
	j = c - 1;
	while (i < BOARD_SIZE && j >= 0 && b[i][j] == player) {
		i++;
		j--;
		count++;
	}
	if (count == 5) return 1;

	// 역대각선
	count = 1;
	i = r - 1; 
	j = c - 1;
	while (i >= 0 && j >= 0 && b[i][j] == player) {
		i--;
		j--;
		count++;
	}
	i = r + 1;
	j = c + 1;
	while (i < BOARD_SIZE && j < BOARD_SIZE && b[i][j] == player) {
		i++;
		j++;
		count++;
	}
	if (count == 5) return 1;

	return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int win;

	for(i =0; i < BOARD_SIZE ; i++ )
		for(j = 0 ; j < BOARD_SIZE ; j++ )
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ') continue; 
		board[r][c] = turn;
		display(board);

		if (win = winCheck(board, r, c))
			printf("Player %c wins!\n", turn);

		turn = (turn == 'X' ? 'O' : 'X');
		count++;
	} while(!win && count <= BOARD_SIZE * BOARD_SIZE);
	
	if (!win)
		printf("Nobody wins!\n");
}