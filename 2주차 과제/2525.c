#include <stdio.h>

int main()

{
	int 시, 분, 시간;
	scanf("%d %d %d", &시, &분, &시간);

	시 += 시간 / 60;
	분 += 시간 % 60;

	if (분 >= 60) {
		시 += 분 / 60;
		분 %= 60;
	}

	if (시 >= 24) {
		시 %= 24;
	}
	printf("%d %d", 시, 분);
	return 0;
}