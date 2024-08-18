#include "Header.h"

// 전처리기(preprocessor) : 컴퓨터 처리에 있어서 중심적인 처리를 수행하는 부분을 위해
//							먼저 실행되는 프로그램을 의미함
//#include는 헤더 파일을 추가하는 전처리기 명령어
//소스파일에 헤더 파일의 내용을 그대로 복사하는 개념

//#include 사용 방법
//#include <헤더파일 이름> 을 통해 Windows Kits에 있는 헤더 파일을 추가함
// (기본으로 있는 거)
//#include "헤더파일 이름"을 통해 프로젝트 내부에 있는 헤더 파일을 추가함
// (내가 직접 만든 거)
//#include "헤더파일 이름" 사용 시 Windows Kit에 있는 헤더파일의 이름을 쓴다고
//오류가 나지는 않음. (프로젝트 내에?)없을 경우 Kit에서 검색을 한 번 더 진행하는 원리

//프로그램 코드가 실행되는 영역
//프로젝트 단위로 작업할 경우 main은 1개만 사용가능

#define point 100
#define pie 3.141592
//대문자로 쓰자. 우리가 만든 것이라는 표시를 하기 위해
//define은 매크로를 만드는 기능
//매크로는 간단하게 사용자가 상수에 대해 이름을 붙이는 것(변수가 아님)

int main()
{
//#으로 작업하면 if부터 endif까지 우선적으로 처리하라는 뜻
#if POINT == 100
	printf("포인트가 최대치입니다.");
#elif POINT < 100
	printf("현재 포인트는 %d입니다.", POINT);
	//%d : 서식지정자
	//회색 코드 : 이미 위에서 if 조건을 만족했으므로 elif조건은 실행 안함
	//미리 알려주는 거야.
#endif

	float length = 0; //float는 실수를 표현하는 데이터
	int radius = 2; //int는 정수를 표현하는 데이터

	//length를 통해 원의 길이를 표현하고자 함

	length = 2 * 3.141592 * radius;
	length = 2 * PIE * radius;

//PIE가 정의되어 있다면 ROUND를 정의함
//ROUND는 원의 둘레를 구하는 매크로
#ifdef PIE
#define ROUND 2 * PIE * radius
#endif
	length = ROUND;

	printf("원의 둘레 : %.2f", length);
	// %.2f는 소수점 두자리까지 표현하는 값
	// ,를 통해 데이터를 넣으면 그 데이터가 넘어감
	// 현재 %.2f는 length의 값을 가지게 됨

	return 0;


}