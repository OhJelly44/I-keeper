//슈퍼 마리오 앞에 10개의 버섯이 일렬로 놓여져 있다.이 버섯을 먹으면 점수를 받는다.

//슈퍼 마리오는 버섯을 처음부터 나온 순서대로 집으려고 한다.하지만, 모든 버섯을 집을 필요는 없고 중간에 중단할 수 있다.중간에 버섯을 먹는 것을 중단했다면, 그 이후에 나온 버섯은 모두 먹을 수 없다.따라서 첫 버섯을 먹지 않았다면, 그 이후 버섯도 모두 먹을 수 없다.

//마리오는 받은 점수의 합을 최대한 100에 가깝게 만들려고 한다.

//버섯의 점수가 주어졌을 때, 마리오가 받는 점수를 출력하는 프로그램을 작성하시오.

//추론: 일단 반복횟수가 정해져있으니 for쓸 생각

/*
#include <stdio.h>

int main()

{
	int mush, sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		scanf_s("%d", &mush);
		sum += mush;
		if (sum >= 100)
			break;
	}
	// 100이후 sum값과 100되기 전에 sum값을 비교하여 나눔
	if (sum - 100 <= 100 - (sum - mush))
	{
		printf("%d", sum);
	}
	else
	{
		printf("%d", (sum - mush));
	}
	return 0;
}
*/

// 이게 왜 되지; 여하튼 구글링 없이 성공 ㅋㅋ!!
