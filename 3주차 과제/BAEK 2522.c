
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.


/*
#include <stdio.h>

int main()
{
	int N = 0;
	scanf_s("%d", &N);
	for (int n = 1; n <= ((2 * N) - 1); n++)
	{
		while (n <= N)
		{
			for (int k = 1; k <= N - n; k++)
			{
				printf("");
			}
			for (int k = 1; k <= (N - n); k++)
			{
				printf("*");
			}
		}
		while (n <= (2 * N - 1))
		{
			for (int k = 1; k <= n; k++)
			{
				printf("");
			}
			for (int k = 1; k <= (N - n); k++)
			{
				printf("*2");
			}
		}
	}
	return 0;
}

// 흠 왜 별만 자꾸 나오는지 의문, 사실 너무 오래 생각해서
// 치우친 생각하느라 넓게 보지 못한거 같음.

#include <stdio.h>

int main() {
    int N = 0;
    scanf_s("%d", &N);

    for (int n = 1; n <= N; n++) 
	{
        for (int k = 1; k <= N - n; k++) 
		{
            printf(" ");
        }
        for (int k = 1; k <= 2 * n - 1; k++) 
		{
            printf("*");
        }
        printf("\n");
    }

    for (int n = N - 1; n >= 1; n--) 
	{
        for (int k = 1; k <= N - n; k++) 
		{
            printf(" ");
        }
        for (int k = 1; k <= 2 * n - 1; k++) 
		{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 2N-1에서 나누기보다 그냥 같은 행위하는 두개로 나눔

*/