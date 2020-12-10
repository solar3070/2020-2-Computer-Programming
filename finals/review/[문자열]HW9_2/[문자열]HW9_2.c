#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char id[15];
	char year[5] = "19";

	printf("주민등록번호 입력('-'포함): ");
	scanf("%s", id);

	strncat(year, id, 2);
	printf("당신은 %s년도 생이군요\n", year);

	if (id[7] == '2') {
		printf("여자분이시군요\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다\n", atoi(year) + 84);
	}
	else {
		printf("남자분이시군요\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다\n", atoi(year) + 77);
	}
}