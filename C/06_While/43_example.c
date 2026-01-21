#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int a = 0;
    int sum = 0;
    srand(time(NULL));
    int answer = rand() % 100 + 1;
    while (1)
    {
        printf("1부터 100사이의 숫자를 맞춰보세요");
        sum ++;
        scanf("%d", &a);
        //printf("%d",answer);
        if (a > answer)
        {
            printf("DOWN \n");
        }
        else if (a < answer)
        {
            printf("UP\n");
        }
        else if (a == answer)
        {
            printf("Right\n");
            printf("총시도 횟수 : %d",sum);
            break;
        }
    }
    return 0;
}