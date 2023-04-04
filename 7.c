#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    scanf("%d %d",&x,&y);
    printf("질량(kg):%d",x);
    printf("속도(m/s) : %d", y);
    z = x * y * y / 2;
    printf("운동에너지(j) : %d", z);
    return 0;
}