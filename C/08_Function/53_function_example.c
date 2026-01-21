#include<stdio.h>

void print_result(int score);

int main()
{
    int score = 0;
    scanf("%d", &score);
    print_result(score);
}

void print_result(int score)
{
    if(score >= 60)
    {
        printf("합격");
    }else
    {
        printf("불합격");
    }
}