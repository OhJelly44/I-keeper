
// ù° �ٿ� N(1 �� N �� 100)�� �־�����.

// ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.


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

// �� �� ���� �ڲ� �������� �ǹ�, ��� �ʹ� ���� �����ؼ�
// ġ��ģ �����ϴ��� �а� ���� ���Ѱ� ����.

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

// 2N-1���� �����⺸�� �׳� ���� �����ϴ� �ΰ��� ����

*/