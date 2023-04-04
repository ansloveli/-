#define _CRT_SECURE_NO_WARNINGS
#define pyeong 3.3//상수 선언 이용
#include <stdio.h>

int main()
{
    long double x;
    printf("평을 입력하세요:");
    scanf_s(" %lf", &x);//정수로 입력받기
    printf("%lf\n", x);
    x = pyeong * x;//상수 불러오기
    printf("%lf평방미터입니다", x);
    return 0;
}