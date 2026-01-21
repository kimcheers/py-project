#include<stdio.h>

int is_adult(int a);

int main()
{
    printf("%d\n", is_adult(25));
    printf("%d\n", is_adult(19));

    return 0;
}

int is_adult(int a)
{
    if (a>=20){
        return 1;
    }
    return 0;
}