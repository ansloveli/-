#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, y; 
    int temp;
    scanf_s("%d &d", &x, &y);
    printf(" x=%d y=%d\n", x, y);//서식 지정자 이용
    temp = y;
    y = x;
    x = temp;
    printf(" x=%d y=%d\n",x,y);

    return 0;
}