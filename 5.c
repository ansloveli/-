#define _CRT_SECURE_NO_WARNINGS
#define pyeong 3.3//��� ���� �̿�
#include <stdio.h>

int main()
{
    long double x;
    printf("���� �Է��ϼ���:");
    scanf_s(" %lf", &x);//������ �Է¹ޱ�
    printf("%lf\n", x);
    x = pyeong * x;//��� �ҷ�����
    printf("%lf�������Դϴ�", x);
    return 0;
}