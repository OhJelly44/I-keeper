#include <stdio.h>

int main()

{
	int a, b, c;
	int sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c && c == a) {
		sum = 10000 + (a * 1000);
	}
	else if (a == b) {
		sum = 1000 + (a * 100);
	}
	else if (a == c) {
		sum = 1000 + (c * 100);
	}
	else if (c == b) {
		sum = 1000 + (b * 100);
	}
	else if (a > b && a > c)
	{
		sum = 100 * a;
	}
	else if (b > a && b > c)
	{
		sum = 100 * b;
	}
	else if (c > b && c > a)
	{
		sum = 100 * c;
	}
	printf("%d", sum);
	return 0;
}