
//백준 10811번

/*
#include <stdio.h>

int main(void)
{
	int N = 0, i = 0, j = 0, M = 0;
	char backet[1024];
	scanf_s("%d %d", &N, &M);
	for (int k = 0; k < M; k++)
	{
		scanf_s("%d %d", &i, &j);
		backet[i] = i + 1;
	}
	while (j < i)
	{
		printf("%s", backet[i]);
		i--;
	}

	while (1)
	{
		printf("%s", backet[i]);
		i++;
		if (i == N)
		{
			break;
		}
	}
	return 0;
}

// i에서 부터 j까지 숫자를 역순으로 쓰고 나머지 숫자들은 정상적으로 배치할려고
// 생각했지만 중간에서 역순으로 쓴다면 상당히 복잡해질거 같음을 느낌



#include <stdio.h>

int main(void)
{
	int basket[101] = { 0, };
	int N, M, i, j;
	int temp;

	scanf_s("%d %d", &N, &M);

	for (int a = 0; a < N; a++) {
		basket[a] = a + 1;
	}

	for (int b = 0; b < M; b++) {
		scanf_s("%d %d", &i, &j);
		for (int c = i - 1; c < j; c++) //  솔직히 여기 for문은 이해가 안간다
		{
			temp = basket[c];
			basket[c] = basket[j - 1];
			basket[j - 1] = temp;
			j--;
		}
		
	}

	for (int d = 0; d < N; d++) {
		printf("%d ", basket[d]);
	}

	return 0;
}
*/


