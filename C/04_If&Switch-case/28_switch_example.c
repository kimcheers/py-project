#include<stdio.h>

int main()
{
    int num1,num2;
    char operate;
    printf("수와 연산자를 입력하세요 (예 5 + 3)");
    scanf("%d %c %d",&num1,&operate,&num2);
    switch (operate)
    {
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        if(num1 !=0){
           printf("%d / %d = %d",num1,num2,num1/num2);
            break; 
        }else{
            printf("0으로 나눌 수 없습니다.");
            break;
        }
    default:
        printf("잘못된 연산자 입니다. %c",operate);
        break;
    }

    return 0;
}