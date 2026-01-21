#include<stdio.h>

int main()
{
    int number[] = {17, 26, 32, 43, 59, 60};
    int nums_length= sizeof(number) / sizeof(number[0]);

    for(int i = 0; i < nums_length; i ++)
    {
        if (number[i] %2 == 0)
        {
            printf("짝수 : %d\n",number[i]);
        }
    }

    return 0;
}