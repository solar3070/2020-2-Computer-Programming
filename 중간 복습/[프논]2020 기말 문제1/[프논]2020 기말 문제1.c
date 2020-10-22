#include <stdio.h>
int main(void)
{
	int a[20];
	int i, n, key, count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &key);
	
	for (i = 0; i < n; i++)
		if (a[i] == key)
			count++;
	printf("%d\n", count);
} 