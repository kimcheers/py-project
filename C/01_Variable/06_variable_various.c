#include<stdio.h>

int main()
{
    char ch1 = 'A';
    int num = 123;
    float f_val =45.67f;
    double d_val = 89.1011;

    printf("Character : %c\n",ch1);
    printf("Intager : %d\n",num);
    printf("Float : %f\n",f_val);
    printf("Double : %lf\n",d_val);

    /*
        Float형에는 f가 붙는 이유 : 
        기본적으로 C는 Double로 처리되어서 접미사 f를 붙인다.
        f없이 f_val = 45.67;로 처리시 double -> float로 형변환이 이루어진다.
        정밀도 손실이 날수도 있고 컴파일러 경고가 뜰수도있다.
    */
   
    return 0;
}