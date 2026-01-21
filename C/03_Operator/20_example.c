#include<stdio.h>

int main()
{
    int price1,price2,price3,total;
    int avg;
    printf("세 상품의가격을 입력해주세요.");
    scanf("%d %d %d",&price1,&price2,&price3);
    total = price1+ price2+ price3;
    printf("총가격은 %d\n",total);
    avg = total *0.9;
    printf("10%%할인된 가격은 %d",avg);
    return 0;
}