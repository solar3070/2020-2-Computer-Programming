extern float g_i;

float sum(float x, float y)
{
 return x + y;
}

float sum_2(float a, float b)
{
 return g_i + sum(a, b);
}