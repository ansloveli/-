#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float a; //�Ǽ� ���� ����
    printf("�Ǽ����Է��Ͻÿ� :");
    scanf("%f",&a);//�Ǽ��� �Է� �ޱ� 
    printf("�Ǽ����Է��Ͻÿ� : %f\n", a);
    printf("�Ǽ��������δ� : %f�Դϴ�\n",a);//�Ǽ��� ���
    printf("�����������δ�  : %e�Դϴ�",a);//������������ ���
        
    return 0;
}