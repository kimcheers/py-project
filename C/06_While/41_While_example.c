#include<stdio.h>

int main()
{
    int a = 0;
    int b=0;
    while(1){
        printf("숫자를 입력하세요 (0을 입력하면 종료) :");
        scanf("%d",&a);
        if(a == 0){
            break;
        }else{
            b = a +b;
            printf("현재까지의 합 : %d\n",b);
        }
    }
    return 0;
}