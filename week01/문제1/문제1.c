#include <stdio.h>
int main(void)
{
	int a[20];
	int i, n, key;
	int keyNum = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &key);

	for (i = 0; i < n; i++)
		if (key == a[i])
			keyNum++;

	printf("%d\n", keyNum);
}