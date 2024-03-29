#include <stdio.h>
#define BOARD_SIZE 3 // 추후에 10으로 바꾸어서 진행한다
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
void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;

	for(i =0; i < BOARD_SIZE ; i++ )
		for(j = 0 ; j < BOARD_SIZE ; j++ )
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열):", turn);
		scanf("%d %d", &r, &c);
		if (board[r][c] == ' ') {
			board[r][c] = turn;
			display(board);
			count++;

			/* 비어있지 않은 경우 다시 계산하는 것을 피하기 위해 if문 안에 넣어주는 게 좋음
			if (count % 2 == 0)
				turn = 'O';
			else
				turn = 'X';
			*/
		}
		if (count % 2 == 0) // 위로 옮기기
			turn = 'O';
		else
			turn = 'X';
	} while(count <= BOARD_SIZE * BOARD_SIZE);
}