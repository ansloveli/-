#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    scanf("%d %d",&x,&y);
    printf("����(kg):%d",x);
    printf("�ӵ�(m/s) : %d", y);
    z = x * y * y / 2;
    printf("�������(j) : %d", z);
    return 0;
}