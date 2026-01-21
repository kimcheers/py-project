#include<stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    for(int i = a; i<=9; i ++){
        printf("--- %d 단 ---\n",i);
        for(int j = 1; j<=9; j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}