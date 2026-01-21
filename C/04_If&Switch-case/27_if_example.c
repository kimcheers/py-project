#include<stdio.h>

int main()
{
    char student,old;
    printf("당신은 학생입니까? (Y 또는 N)");
    scanf("%c",&student);
    printf("연장자 (65세 이상)이면 Y를 입력해주세요 (Y 또는 N)");
    scanf(" %c",&old);
    if(student == 'Y' || old == 'Y')
    {
        printf("할인 티켓을 받을 수 있습니다.");
    }else if (old =='N' || student =='N')
    {
        printf("정가 티켓을 결제해야 됩니다.");
    }else
    {
        printf("상담하시오");
    }
    return 0;
}