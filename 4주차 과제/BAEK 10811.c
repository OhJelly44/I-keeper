
//���� 10811��

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

// i���� ���� j���� ���ڸ� �������� ���� ������ ���ڵ��� ���������� ��ġ�ҷ���
// ���������� �߰����� �������� ���ٸ� ����� ���������� ������ ����



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
		for (int c = i - 1; c < j; c++) //  ������ ���� for���� ���ذ� �Ȱ���
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


