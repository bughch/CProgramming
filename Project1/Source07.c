#include "Header.h"

//문제 1
//숫자3개를 입력받아서 입력한 숫자 중에서 가장 큰 수를 화면에 출력
//힌트) scanf("%d %d %d", &a, &b, &c);
//를 사용 시 1 2 3 과 같이 한 번에 적어놓은 수 만큼 입력이 가능함

//문제2
//조건을 2개 이상 붙이는 방법
//if (a > 0 && b > 0) //a가 0보다 크면서 b가 0보다 크다면
//if (a > 0 || b > 0) //a가 0보다 크거나 b가 0보다 크다면
//if(a>0 && b>0 || c>0) //&&를 먼저 계산. 우선순위가 더 높거든
//a가 0보다 크면서 b가 0보다 크거나 c가 0보다 크다면
//문제) 세 변의 길이로 유효한 삼각형인지를 조사하는 프로그램을 구현
//힌트) 두 변의 길이의 합이 나머지 한 변의 길이보다 커야 함
//출력예시)
//변 A,B,C의 길이를 순서대로 입력해주세요 >> 5 4 6
//삼각형이 성립합니다.

//변 A,B,C의 길이를 순서대로 입력해주세요 >> 101
//삼각형이 아닙니다.

int main()
{
	/*int a, b, c;
	printf("숫자 3개를 입력하세요 >> ");
	scanf("%d %d %d", &a, &b, &c);
	int Max;

	if (a >= b)
	{
		if (a >= c)
		{
			Max = a;
		}
		else
		{
			Max = c;
		}
	}
	else
	{
		if (b >= c)
		{
			Max = b;
		}
		else
		{
			Max = c;
		}
	}

	printf("가장 큰 수는 %d입니다", Max);*/

	int a, b, c;

	printf("변 A,B,C의 길이를 순서대로 입력해주세요 >> ");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("삼각형이 성립합니다.\n");
	}
	else
	{
		printf("삼각형이 아닙니다.\n");
	}
	
	return 0;
}