#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float data; //�Ǽ� ���� ����

    scanf("%f", &data);
    printf("16���� ������ �Է��Ͻÿ� : %f\n", data);
    printf("8�����δ�%o�Դϴ�\n", data);//8���� ǥ��� %o ���
    printf("10�����δ�%f�Դϱ�?\n", data);
    printf("16�����δ�%#x�Դϴ�\n", data);//6���� ǥ��� %#x ���

    return 0;
}