#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float data; //실수 변수 선언

    scanf("%f", &data);
    printf("16진수 정수를 입력하시오 : %f\n", data);
    printf("8진수로는%o입니다\n", data);//8진수 표기법 %o 사용
    printf("10진수로는%f입니까?\n", data);
    printf("16진수로는%#x입니다\n", data);//6진수 표기법 %#x 사용

    return 0;
}