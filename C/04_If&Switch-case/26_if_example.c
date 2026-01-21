#include<stdio.h>

int main()
{
    char a;
    int age;

    printf("나이를 입력하세요");
    scanf("%d",&age);
    printf("티켓을 가지고 있습니까? (Y 또는 N)");
    scanf(" %c",&a);//%c앞에 ' '를 붙이는 이유는 buffer에 저장되서임ㅇㅇ 

    if(a != 'Y' || a!='y')
    {
        printf("입장이 불가합니다.");
    }else if(age>=10)
    {
        printf("입장이 가능합니다.");
    }else
    {
        printf("어린이는 보호자 동반시 입장 가능합니다.");
    }
    
    return 0;
}