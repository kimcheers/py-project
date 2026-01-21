#include<stdio.h>

int main()
{
    int temp;
    printf("기온을 입력하세요");
    scanf("%d",&temp);
    if(temp>=25)
    {
        printf("반팔을 입으세요!");
    }else if(temp>=15)
    {
        printf("가벼운 자켓을 입으세요!");
    }else if(temp>=5)
    {
        printf("두꺼운 외투를 입으세요!");
    }else
    {
        printf("패딩을 꼭 입으세요!");
    }
    return 0;
}