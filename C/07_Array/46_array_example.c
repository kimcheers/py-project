#include<stdio.h>

int main()
{
    int scores[] = {80, 92, 75, 60, 100};
    int nums_length= sizeof(scores) / sizeof(scores[0]);
    int sum;

    for (int i = 0; i<nums_length; i ++)
    {
        sum = sum + scores[i];
    }
    printf("총점 : %d", sum);
    return 0;
}