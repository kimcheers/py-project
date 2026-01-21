#include<stdio.h>

int mulitply(int num1, int num2);

int main()
{
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    int result = mulitply(num1, num2);
    printf("곱셈의 결과는 %d 입니다.",result);

    return 0;
}

int mulitply(int num1, int num2)
{
    return num1 * num2;
}