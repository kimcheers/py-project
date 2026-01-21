#include<stdio.h>

int get_average(int scorcs[], int scores_length);

int main()
{
    int scores[] = {72, 85, 90, 65, 78};
    int scores_length= sizeof(scores) / sizeof(scores[0]);
    //printf("%d",scores_length);
    int average = get_average(scores, scores_length);
    printf("%d", average);
    return 0;
}

int get_average(int scorcs[], int scores_length)
{
    int a = 0;
    for(int i = 0; i<scores_length; i++)
    {
        a = a + scorcs[i];
    }
    a = a/scores_length;
    return a;
}