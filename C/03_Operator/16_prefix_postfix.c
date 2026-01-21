#include <stdio.h>

int main()
{
    int num = 7;
    //전위 증가 연산자 사용: 값이 증가한 후에 대입됨

    int result1= ++num;//result1 = 8, num = 8
    
    printf("result1 = %d, num = %d\n",result1, num);

    //후위 증가 연산자 사용 : 값을 대입한 후에 증가
    int result2= num++;//result2 = 8 num = 9
    
    printf("result2 = %d, num = %d ",result2, num);

    return 0;
}