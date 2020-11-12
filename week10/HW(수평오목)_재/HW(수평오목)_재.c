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
	int i, j;
	int sum = 1;
	char player = b[r][c];
	
	i = 1;
	while (c - i >= 0 && b[r][c - i] == player) { // 왼쪽 체크
		sum++;
		i++;
	}
	j = 1;
	while (c + j < BOARD_SIZE && b[r][c + j] == player) { //오른쪽 체크
		sum++;
		j++;
	} 

	if (sum == 5) return 1;
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
	
	if (!win && count <= BOARD_SIZE * BOARD_SIZE)
		printf("Nobody wins!\n");
}