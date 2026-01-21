#include<stdio.h>

int main()
{
    double cm;
    double kg;
    printf("키(cm)와 몸무게(kg)를 입력하세요(예: 170.2 60.3)");
    scanf("%lf %lf",&cm, &kg);
    printf("입력한 키 : %.1lfcm, 몸무게 %.1lfkg",cm,kg);
    return 0;
}