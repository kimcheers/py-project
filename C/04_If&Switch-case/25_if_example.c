#include<stdio.h>
#include<string.h>

int main()
{
    char transport[20];
    printf("교통수단을 입력해 주세요 (지하철, 버스, 택시)");
    scanf("%s",transport);
    if(strcmp(transport,"지하철")==0)
    {
        printf("요금은 1400원 입니다.");
    }else if (strcmp(transport, "버스")==0)
    {
        printf("요금은 1300원입니다.");
    }else if (strcmp(transport, "택시")==0)
    {
        printf("기본요금은 4000원입니다.");
    }else
    {
        printf("등록되지 않은 교통수단입니다.");
    }

    return 0;
}
