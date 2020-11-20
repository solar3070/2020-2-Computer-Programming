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
	int ci, count = 1;
	char player = b[r][c];
	
	ci = c - 1;
	while (ci >= 0 && b[r][ci] == player) { 
		// b[r][ci] == player && ci >= 0인 경우 만일 ci가 -1이면 b[r][-1]과 같이 인덱스를 벗어나는 일이 생길 수 있음 
		// A && B에서 A가 거짓이면 B를 보지 않고 거짓, A || B에서 A가 참이면 B를 보지 않고 참
		// HW(수평오목)_재에서 처럼 b[r][c - i] == player 이렇게 두면 c - i를 계속 계산해야 하므로 이게 더 좋은 코드
		count++;
		ci--;
	}

	ci = c + 1;
	while (ci < BOARD_SIZE && b[r][ci] == player) { 
		count++;
		ci++;
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
	
	if (!win) // count <= BOARD_SIZE * BOARD_SIZE 조건문에 넣을 필요 x
		printf("Nobody wins!\n");
}