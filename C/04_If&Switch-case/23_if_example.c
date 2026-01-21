#include<stdio.h>

int main()
{
    int a;
    printf("정수를 입력하세요");
    scanf("%d",&a);
    if(a<0)
    {
        printf("입력하신 정수는 음수입니다.");
    }else if(a==0)
    {
        printf("입력하신 정수는 0입니다.");
    }else{
        printf("입력하신 정수는 양수입니다.");
    }
    return 0;
}