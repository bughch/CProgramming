#include "Header.h"

//연습) 다음 조건의 코드를 작성하세요
//0부터 100사이의 점수를 입력
//입력한 점수가 60점 이상일 경우 "합격"
//60점 미만일 경우 "불합격"을 출력함

int main()
{
	//나
	/*int Score;
	printf("점수를 입력하세요 : ");
	scanf("%d", &Score);

	if (Score >= 60)
	{
		printf("합격\n");
	}
	else
	{
		printf("불합격\n");
	}*/

	//강사님
	/*int score;

	printf("0에서 100사이의 숫자를 입력해주세요 >>");
	scanf("%d", &score);
	if (score >= 60)
	{
		printf("합격\n");
	}
	else
	{
		printf("불합격\n");
	}*/

	//연습문제2) 다음 조건의 코드를 작성하세요
	//화면에는 메뉴와 메뉴의 가격이 표시되어 있음(메뉴는 자유롭게 작성)
	//사용자는 메뉴를 보고 그 메뉴의 번호를 입력
	//사용자가 그 메뉴를 구매할 가격을 보유하고 있을 경우 그 메뉴를 구입할 수 있음
	//없는 경우에는 잔액이 부족하다는 메세지가 출력됨

	//나
	int money = 1200;
	int tteok = 1000;
	int omuk = 500;
	int tui = 1000;
	printf("1.떡볶이%d  2.어묵%d  3.튀김%d\n", tteok, omuk, tui);
	int select;
	printf("메뉴를 골라주세요 >> ");
	scanf("%d", &select);
	if (select == 1)
	{
		if (money >= tteok)
		{
			printf("구입 가능");
		}
		else
		{
			printf("잔액이 부족합니다.");
		}
	}
	else if (select == 2)
	{
		if (money >= omuk)
		{
			printf("구입 가능");
		}
		else
		{
			printf("잔액이 부족합니다.");
		}
	}
	else if (select == 3)
	{
		if (money >= tui)
		{
			printf("구입 가능");
		}
		else
		{
			printf("잔액이 부족합니다.");
		}
	}

	return 0;
}