#include<stdio.h>
//void : 없다.
//매게 변수가 없고 반환 값도 없는 함수.
void greet(void)
{
    printf("Hello World!\n");
}
//매게 변수가 2개이고 정수형 반환 값이 있는 함수.
int add(int a, int b)
{
    printf("%d",a);
    return a + b;
}

int main()
{
    //함수 호출(사용)
    greet();

    int result = add(10, 20);
    printf("%d",result);

    return 0;
}