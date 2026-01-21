#include <stdio.h>

int main()
{
    int weekend;
    printf("요일 번호를 입력하세요");
    scanf("%d", &weekend);
    switch (weekend)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("오늘은 평일입니다. 등교해야 해요!");
        break;
    case 6:
    case 7:
        printf("오늘은 주말입니다. 푹 쉬세요!");
        break;

    default:
        printf("잘못된 요일입니다.");
        break;
    }
    return 0;
}