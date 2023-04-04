#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    printf("아스키코드값을 입력하시오:");
    scanf("%d", &a);//아스키코드 숫자로 입력받고 문자로 저장한다
    printf("문자 :%c입니다", a);
    return 0;
}