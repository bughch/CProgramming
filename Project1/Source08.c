#include "Header.h"

//반복문 for문

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		printf("안녕하세요.\n");
	}

	//printf("%d", i); //for문 안에서 만들어준 int i는 for문이 끝나면 사라짐

	//2. 이중 for문(for문 안에 for문이 있는 형태)

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("ㅁ");
		}
		printf("\n");//안의 for문 끝날 때마다 띄어쓰기 진행
	}
	//1. int i실행
	//2. 조건 확인
	//2-1.내부 for문 실행
	//		1. int i실행
	//		2. 조건 확인
	//		2-1. 조건 맞으면 printf
	//		2-2 j++실행
	//		3. 조건 안 맞으면 종료
	//2-2.printf\n실행
	//2-3 i++실행
	//		 조건 안 맞을 때까지 반복
	// i한 번 당 j 5번 반복하는 코드

	//3.반복문에 특정 제어문을 작성하는 경우
	//3-1. if문
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)//짝수만
		{
			printf("%d", i);
		}
	}
	printf("\n");
	//3-2. continue
	//반복문을 건너뛰는 기능을 가지고 있음. continue 다음 동작을 실행하지 않고 다음 반복 차례로 넘기는 용도

	for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			continue;
			printf("i가 3입니다.\n");
		}
		printf("i = %d ", i);
	}

	printf("\n");

	//3-3. break
	//반복문의 작업을 종료하는 명령어임
	for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			break;
			printf("i가 3입니다.\n");
		}
		printf("i = %d ", i);
	}

	return 0;
}