#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long double x, y, z;
    printf("������ ���� ���� ���̸� �ѹ��� �Է�:");
    scanf_s("%lf %lf %lf", &x, &y, &z);//�Ǽ��Է¹ޱ�
    printf(" %lf %lf %lf\n", x, y, z);
    printf("������ ���Ǵ� %lf�ϲ��ϴ�.\n", x * y * z);

    return 0;
}