
// 백준 7567번 그릇 문제


/*
#include <stdio.h>
#include <string.h>

int main() 
{
    char bowls[51];
    int height = 10; // 첫번째 그릇은 10cm 고정

    scanf_s("%s", bowls);

    int length = strlen(bowls);

    for (int i = 1; i < length; i++) 
    {
        if (bowls[i] == bowls[i - 1]) // 앞의 그릇과 모양비교 떠올리지 못함,,
        {
            height += 5;
        }
        else 
        {
            height += 10;
        }
    }

    printf("%d\n", height);

    return 0;
}
*/

