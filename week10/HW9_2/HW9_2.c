#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char number[15];
	char year[5] = "19";
	char gender[2];

	printf("주민등록번호 입력('-'포함): ");
	scanf("%s", number);

	printf("당신은 %s년도 생이군요.\n", strncat(year, number, 2));
	
	gender[0] = number[7];
	gender[1] = '\0';
	if (!strcmp(gender, "2")) {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 84);
	}
	else {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 77);
	}
}