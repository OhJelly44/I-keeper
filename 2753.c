//problum 윤년문제

/*
연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다.하지만, 2000년은 400의 배수이기 때문에 윤년이다.
4의 배수이면서 100의 배수가 아닌것을 찾기 위해선 최소 공배수가 100이라는 생각을 하였다. 하지만 400의 배수일때는 된다.
4로 나눴을때 나머지가 0이고 100의 배수가 아니면 되지만, 400의 배수는 되는것을 골라야한다. 4, 100, 400으로 나누고 나머지로 판단.
*/

#include <stdio.h>

int main()

{
	int a;
	scanf_s("%d", &a);
	if (a % 4 == 0) // 4의 배수인가 확인
	{
		if (a % 100 != 0 || a % 400 == 0)
		// 100의 배수가 아닌지 확인. but, 100의 배수여도 400의 배수라면 윤년이기에 제외해줘야함
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("4의 배수가 아닙니다.");
	}
	return 0;
}
