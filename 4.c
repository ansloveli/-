#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long double x, y, z;
    printf("상자의 가로 세로 높이를 한번에 입력:");
    scanf_s("%lf %lf %lf", &x, &y, &z);//실수입력받기
    printf(" %lf %lf %lf\n", x, y, z);
    printf("상자의 부피는 %lf일껍니다.\n", x * y * z);

    return 0;
}