#include <stdio.h>

int main()
{
    char food;
    int price;
    printf("주문말 음료를 선택해주세요 \n a - 아메리카노 : 3,000원 \n b - 라떼 : 4,000원 \n c - 카푸치노 : 4,500원 \n d - 주스 3,500원\n");
    printf("선택 : ");
    scanf("%c", &food);

    switch (food)
    {
    case 'a':
        price = 3000;
        break;
    case 'b':
        price = 4000;
        break;
    case 'c':
        price = 4500;
        break;
    case 'd':
        price = 3500;
        break;

    default:
    printf("메뉴에 없는 항목입니다.");
        return 1;
    }
    printf("선택하신 음료의 가격은 %d원입니다.",price);
    return 0;
}