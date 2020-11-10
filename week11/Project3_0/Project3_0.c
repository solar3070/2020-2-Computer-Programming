#define MAX_VIDEO 100
#define MAX_CHAR 100 

#include <stdio.h>
#include <string.h>

struct VideoInfo {
	char title[MAX_CHAR] ;
	int qty ;
};

int main(void)
{
	int videoCount = 5;
	struct VideoInfo videoList[MAX_VIDEO] = {
		{"BeforeSunrise", 1},
		{"BeforeSunset", 3},
		{"BeforeMidnight", 5},
		{"Casablanca", 7},
		{"EdgeOfTomorrow", 9}};
	char title[MAX_CHAR];
	int qty, i, is_in = 0;
	int choice;

	printf("1(All Video ���), 2(����), 3(�˻�), 4(����): "); 
	scanf("%d", &choice);
	while (choice != 4) {
		switch(choice) {
		case 1: 
			printf("Video ����\t ����\n");
			printf("-----------------------\n");
			for (i = 0; i < videoCount; i++)
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			break;
		case 2:
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter video ����: ");
			scanf("%d", &qty);

			strcpy(videoList[videoCount].title, title);
			videoList[videoCount].qty = qty;
			videoCount++;
			break;
		case 3: 
			printf("Enter video ����: ");
			scanf("%s", title);
			
			for (i = 0; i < videoCount; i++)
				if (!strcmp(videoList[i].title, title)) {
					is_in = 1;
					if (videoList[i].qty > 0)
						printf("�뿩 �����մϴ�.\n");
					else
						printf("���� �뿩 ���Դϴ�.\n");
					break;
				}
			if (!is_in)
				printf("�׷� ������ �����ϴ�.\n");
			break; 
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(����): "); 
		scanf("%d", &choice);
	}
} 