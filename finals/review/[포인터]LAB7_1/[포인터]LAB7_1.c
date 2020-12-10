#include <stdio.h>
int main(void)
{
	int x[] = {0, 0, 1, 2, 3};
	char c[] = "BBCDE";
	double f = 2.3;
	int i, sum = 0;
	
	int *px;
	char *pc; 
	double *pd;

	px = x;
	pc = c;
	pd = &f;
	printf("가-1) %d %c %.1f\n", x[0], c[0], f);
	printf("가-2) %d %c %.1f\n", *px, *pc, *pd);
	
	*px -= 1;
	*pc -= 1;
	*pd += 1.2;
	// *px = -1; *pc = 'A'; *pd = 3.5;
	printf("나) %d %c %.1lf\n", x[0], c[0], f);
	
	for (i = 0; i < 5; i++)
		sum += *px++;
	printf("다) sum = %d\n", sum); // sum의 값은 5
	
	// 라)
	px = x;
	for (i = 0; i < sizeof(x) / sizeof(int); i++)
	{
		*px = 100;
		px++;
	}
	
	// 마)
	pc = c;
	for (i = 0; i < sizeof(c) / sizeof(char); i++)
	{
		*pc = 'X';
		pc++;
	}
	pc = c;
	for (i = 0; i < sizeof(c) / sizeof(char); i++)
		printf("%c", *pc++); // x로 6개 출력, \0까지 x로 변함
	printf("\n");
} 