#include<stdio.h>

int main()
{
/*
    int age;
    printf("나이를 입력하세요");
    scanf("%d", &age);
    //printf("나이가 20세 이상인가? %d\n",age >= 20);

    // 나이가 20세 이상이고 65세 미만인지 확인
    int is_adult = age >= 20 && age <65;
    printf("나이가 20세 이상이고 65세 미만인가? %d",is_adult);
*/
    char grade;
    printf("학점을 입력하세요 (A ~ F) :");
    scanf(" %c",&grade);
    int is_passing = grade == 'A' || grade == 'B';
    printf("합격 여부는 : %d",is_passing);
    return 0;
}