
// 문자열 4개를 입력 받고 가장 짧은 문자열과 
// 가장 긴 문자열을 합치시오.


/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[4][1024], M[1024], m[1024];
	for (int i = 0; i < 5; i++) 
	{
		scanf_s("%s %s %s %s", str[i]);
	}
	for (int i = 0; i < 5; i++) 
	{
		if (strlen(str[i]) < strlen(str[0]))
		{
			char M = str[0];
		}
		else if (strlen(str[i]) < strlen(str[1]))
		{
			char M = str[1];
		}
		else if (strlen(str[i]) < strlen(str[2]))
		{
			char M = str[2];
		}
		else if (strlen(str[i]) < strlen(str[3]))
		{
			char M = str[3];
		}
		if (strlen(str[i]) > strlen(str[0]))
		{
			char m = str[0];
		}
		else if (strlen(str[i]) > strlen(str[1]))
		{
			char m = str[1];
		}
		else if (strlen(str[i]) > strlen(str[2]))
		{
			char m = str[2];
		}
		else if (strlen(str[i]) > strlen(str[3]))
		{
			char m = str[3];
		}
	}

}
*/