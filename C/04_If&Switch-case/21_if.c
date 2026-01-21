#include<stdio.h>
#include<string.h>

int main()
{
    int score = 85;
    if(score >= 90)
    {
       printf("A등급 합격\n");
    }else if(score >= 80)
    {
        printf("B등급 합격\n");
    }else
    {
        printf("불합격");
    }
    char name[20];
    printf("이름을 입력하세요");
    scanf("%s",name);
    printf("%s님 안녕하세요",name);

    // strcmp 함수를 사용하여 문자열 비교
    // strcmp(a,b) 두문자열이 같으면 0반환
    // a가 b보다 사전순으로 크면 양수 작으면 음수 반환
    if(strcmp(name, "김지환") == 0)
    {
        printf("%s님 환영합니다.",name);
    }

    return 0;
}