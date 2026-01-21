#include<stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            sum = i + sum;
        }
    }
    printf("1 부터 100까지 중 3의 배수이면서 5의 배수인 수의 합은 %d입니다.",sum);
    return 0;
}