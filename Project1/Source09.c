#include "Header.h"

int main()
{
	//연습문제1)
	//첫날에는 1원을 가지고 있음
	//이후 30일 동안 전날보다 2배의 금액을 받게 됩니다
	//30일이 되었을 때 총 금액이 얼마나 나오는지 출력

	int total = 0;
	int money = 1;
	for (int i = 1; i <= 30; i++)
	{
		total += money;
		money *= 2;
	}
	printf("%d", total);
	//1073741823

	//연습문제2)
	//입력한 숫자가 소수인지를 판단하는 프로그램
	//조건) int is_prime이라는 변수가 제공됨
	//		이 is_prime이 1일 경우 소수, 0일 경우 소수가 아니라고 출력해줌

	int n, is_prime;

	printf("숫자를 입력해주세요 >> ");
	scanf("%d", &n);

	//소수를 계산하기 위한 for문 설계
	//소수의 조건 : n이 1과 자기 자신을 약수로 가지는 수
	//소수의 첫 번째 값은 2

	is_prime = 1;
	//문제 풀이의 핵심 is_prime의 값이 무엇이냐?
	//설계자는 다음과 같은 전제로 조건을 짠다
	//is_prime의 초기값을 1로 설정했다면 아래의 for문에서는 is_prime이 0이 되는 조건을 설계함.
	//is_prime을 0으로 설정했다면 1이 되는 조건을 설계함

	for (int i = 2; i < n; i++)
	{
		if (n % i != 0) //나누어 떨어지지 않음. 소수
		{
			continue;
		}
		else //나누어 떨어짐. 합성수
		{
			is_prime = 0;
			break;
		}
	}

	if(n == 1)
	{
		printf("%d은 소수도 합성수도 아닙니다.\n", n);
	}
	if (is_prime == 1)
	{
		printf("%d는 소수입니다\n", n);
	}
	else
	{
		printf("%d는 소수가 아닙니다.\n", n);
	}

	return 0;
}