#include<stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0){
            sum = sum + i;
        }
    }
    printf("1 부터 100 사이의 짝수의 합은 %d 입니다.",sum);
    return 0;
}