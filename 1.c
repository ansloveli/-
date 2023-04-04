#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float a; //실수 변수 선언
    printf("실수를입력하시오 :");
    scanf("%f",&a);//실수로 입력 받기 
    printf("실수를입력하시오 : %f\n", a);
    printf("실수형식으로는 : %f입니다\n",a);//실수로 출력
    printf("지수형식으로는  : %e입니다",a);//지수형식으로 출력
        
    return 0;
}