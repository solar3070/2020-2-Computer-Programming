#include <stdio.h>

extern float sum_2(float a, float b);
float g_i = 10.0;

int main(void)
{
	 fprintf(stdout, "��� ����� %f �Դϴ�\n", sum_2(10, 20));
	 return 0;
} 