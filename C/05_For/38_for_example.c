#include<stdio.h>

int main()
{
    int input = 0;
    int coupon = 0;
    printf("마신 커피 잔수를 입력하세요 : ");
    scanf("%d", &input);
    for(int i = 1; i <= input; i++)
    {
        //printf("%d 번째 커피를 마셨습니다.",input);
        if(i % 10 == 0){
            coupon++;
            printf("%d번째 커피 ! 무료쿠폰이 지급되었습니다.\n",i);
        }else
        {
            printf("%d 번째 커피를 마셨습니다.\n",i);
        }
    }
    printf("총 %d잔을 마셔서 지급된 무료 쿠폰은 %d장입니다.",input,coupon);
    return 0;
}