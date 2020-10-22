#include <stdio.h>

extern float sum_2(float a, float b);
float g_i = 10.0;

int main(void)
{
	 fprintf(stdout, "계산 결과는 %f 입니다\n", sum_2(10, 20));
	 return 0;
} 