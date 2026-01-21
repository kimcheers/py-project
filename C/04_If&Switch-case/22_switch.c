#include<stdio.h>

int main()
{
    int day = 6;

    switch (day)
    {
    case 1:
        printf("오늘은 월요일입니다.\n");
        break;
    case 2:
        printf("오늘은 화요일입니다.\n");
        break;
    case 3:
        printf("오늘은 수요일입니다.\n");
        break;
    default:
        printf("오늘은 주말입니다.\n");
    }
    return 0;
}