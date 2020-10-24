#include <stdio.h> 
int main(void) 
{
	int gradeTable[5][4] = {{10, 15, 20, 0}, {30, 35, 20, 0}, {60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0}};
	int i, j, stdSum, examSum;

	printf("a)\n"); 
	for (i = 0; i < 5; i++) { 
		for (j = 0; j < 4; j++) 
			printf("%4d", gradeTable[i][j]); 
		printf("\n"); 
	} 

	printf("b)\n"); 
	for (i = 0; i < 4; i++) { 
		stdSum = 0;
		for (j = 0; j < 4; j++) 
			stdSum += gradeTable[i][j];
		gradeTable[i][3] = stdSum;
	}

	for (j = 0; j < 3; j++) { 
		examSum = 0;
		for (i = 0; i < 4; i++) 
			examSum += gradeTable[i][j];
		gradeTable[4][j] = examSum;
	}

	for (i = 0; i < 5; i++) { 
		for (j = 0; j < 4; j++) 
			printf("%4d", gradeTable[i][j]); 
		printf("\n"); 
	} 
}