#include <stdio.h>
int main(void)
{
	int coins[4] = {500, 100, 50, 10};
	int change, i;
	int changeNum[4] = {0};

	printf("Enter the amount of change: ");
	scanf("%d", &change);

	while (change) 
		for (i = 0; i < 4; i++) 
			if (change / coins[i]) {
				changeNum[i] = change / coins[i];
				change %= coins[i];
			}

	for (i = 0; i < 4; i++)
		printf("%d coin: %d\n", coins[i], changeNum[i]);

	return 0;
}