#include<stdio.h>

int main()
{
    int a = 0;
    for(int i = 1; i<=100; i++)
    {
        if(i %3 == 0 || i % 5 == 0)
        {
            a = a + i;
        }
    }
    printf("1부터 100까지중 3 또는 5의 배수의 합은 %d 입니다.",a);
    return 0;
}