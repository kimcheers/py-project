#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("세 과목의 점수를 입력하세요(예: 85 90 78)");
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    double avg = sum /3.0;
    printf("총점은 %d점 입니다.\n",sum);
    printf("평균은 %.2f입니다.",avg);
    return 0;
}