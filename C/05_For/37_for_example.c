#include<stdio.h>

int main()
{
    int sum0 = 0;
    int sum1 = 0;
    for(int i = 1; i <= 20; i ++)
    {
        if (i % 2 == 0){
            sum0 += i;
            
        }else
        {
            sum1++;
        }
    }
    printf("1부터 20까지의 짝수의 합은 %d입니다.\n", sum0);
    printf("1부터 20까지의 홀수의 개수는 %d개입니다.", sum1);
    return 0;
}