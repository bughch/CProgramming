#include "Header.h"

//C언어 3일차 2교시 관계, 논리 사용
//1. 프로그램에서 특정 상황에 맞게 코드를 실행하는 제어문 등에서 사용하는 연산자
//2. 주로 if문과 많이 사용됨

//if문
// T : 조건이 일치하는 경우
// F : 조건이 맞지 않는 경우
// C : 조건식
//if (C)
//{
//	조건이 T일 경우, 실행할 명령문;
//}
//else if (C2)
//{
//	위의 C가 F인 상태에서 C2가 T일 경우 실행할 명령문;
//}
//else
//{
//	위의 모든 if, else가 F인 경우 실행할 명령문;
//}

//if문 사용시 알아둘 것
//1. 조건을 여러 개 쓰고 싶을 경우 else if 를 사용함
//2. else if 는 여러 개 존재할 수 있음
//3. else if 사용 시에는 반드시 if문이 먼저 존재해야 함
//4. 만약에 else if위에 적은 if문이나 else if 문이 실행된다면 나머지는 다 실행 안됨
//5. if문 다음에 if문을 작성할 경우 연결된 게 아닌 각각의 작업을 진행함 별개

int main()
{
	//이 가게는 AM 08 : 00 ~ 18 : 00까지 운영함
	//운영하고 있으면 "OPEN", 아닐 경우 "CLOSE"를 화면에 출력하려고 함

	int time = 19;

	//내 코드
	//자바에선 되고 파이썬에선 AND를 쓰고 C+에선 되고 여기는 C라서 안될 거임 밑에 연산자를 사용하도록 하자
	/*if (8 <= time <= 18)
	{
		printf("OPEN\n");
	}
	else
	{
		printf("CLOSE\n");
	}*/

	//강사님 코드
	// 첫번째 설계 방법) if문을 여러 개 작성해 조건식을 만족함
	//open할 조건? 8시부터 18시까지
	//if (time >= 8)
	//{
	//	//18시보다 작거나 같은 경우 작업 진행
	//	if (time <= 18)
	//	{
	//		print("OPEN\n");
	//	}
	//	//18시보다 큰 경우 실행
	//	else
	//	{
	//		printf("CLOSE\n");
	//	}
	//}
	////8시보다 작은 경우 작업 실행
	//else
	//{
	//	printf("CLOSE\n");
	//}

	//두번째 방법) 논리 연산자를 이용해 조건식 2개를 연결
	//논리 연산 유형
	//1. AND연산 C1 && C2		C1의 조건과 C2의 조건이 둘다 만족해야 T
	//2. OR연산 C1 || C2		C1의 조건이나 C2의 조건 중 하나라도 만족하면 T
	//3. NOT연산 !C1			C1의 조건의 결과를 반대로 뽑음

	//time = 19;

	//if (time >= 8 && time <= 18) //시간이 8시 이상 18시 이하
	//{
	//	printf("OPEN\n");
	//}
	//else
	//{
	//	printf("CLOSE\n");
	//}

	//세번째 방법) 조건연산으로 설게하기
	//조건) 결과가 찬성/반대처럼 딱 두 가지로 나뉘는 경우에만 이 방식 사용 가능
	//time >= 8 && time <= 18 ? printf("OPEN\n") : printf("CLOSE\n");
	//시간이 8시 이상 18시 이하일 때
	//조건이 맞으면 OPEN
	//조건이 틀리면 CLOSE 실행

	return 0;
}