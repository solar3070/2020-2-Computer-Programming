// 교수님 코드
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char id[50];
	char birthYear[50]; // 문자열로 생년을 저장
	int year; // 숫자로 생년을 저장

	printf("주민등록번호 입력('-'포함): ");
	gets(id);

	strcpy(birthYear, "19");
	strncat(birthYear, id, 2);
	year = atoi(birthYear);

	printf("당신은 %s년도 생이군요.\n", birthYear);
	
	if (id[7] == '2') {
		printf("여자분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 84);
	}
	else {
		printf("남자분이시군요.\n");
		printf("평균 수명 77를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 77);
	}
}