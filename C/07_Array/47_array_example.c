#include<stdio.h>

int main()
{
    int student = 0;
    printf("학생수를 입력하세요 : ");
    scanf("%d",&student);

    int a[student];
    int nums_length= sizeof(a) / sizeof(a[0]);
    
    int add = 0;
    int pass;
    int max;

    for(int i = 0; i<nums_length; i++)
    {
        printf("%d번째 학생의 점수를 입력하세요 : ", i+1);
        scanf("%d",&a[i]);
        add = add + a[i];
        if(a[i]>=60)
        {
            pass++;
        }
        if(add > a[i]){
            max = a[i];
            //printf("합계점수 %d", max);
        }
    }

    printf("합계 점수 %d\n", add);
    printf("최고 점수 %d\n", max);
    printf("합격자 수 %d\n", pass);

    return 0;
}