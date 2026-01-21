#include<stdio.h>

int main()
{
    int password = 0;
    int correct_password = 1234;

    while(password != correct_password){
        printf("비밀번호를 입력하세요");
        scanf("%d",&password);
    }
    //무한루프
    //반드시 탈출조건 有
    while(1){
        printf("비밀번호를 입력하세요");
        scanf("%d",&password);
        if(password == correct_password){
            break;
        }
    }
    printf("로그인 성공");
    
    return 0;
}