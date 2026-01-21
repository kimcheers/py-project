#include <stdio.h>

int main()
{
    //배열 선언 및 초기화
    int arr[5] = {1, 3, 25,};

    int nums[7]={10, 20, 30, 40, 50, 60, 70};
    //printf("nums[n]번째 접근법 : %d\n", nums[2]);

    int nums_length= sizeof(nums) / sizeof(nums[0]);//sizeof : num 배열 크기 구하기

    for(int i=0; i<nums_length; ++i)
    {
        printf("nums[%d] : %d\n",i,nums[i]);
    }

    int scores[3];


    for(int i = 0; i < 3; i++)
    {
        scanf("%d",&scores[i]);
        printf("%d\n",scores[i]);
    }

    return 0;
}