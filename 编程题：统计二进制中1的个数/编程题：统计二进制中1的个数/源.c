#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_bit_one(unsigned int n)
{
    int count = 0;
    while (n)//�����㷨�൱��Ч
    {
        n = n & (n - 1); //����n=13����1101����ô13-1=12,��1100,������&һ�£�����1100����ѭ����=0Ϊֹ���������ܵõ�1��������ʵ�ڲ�������һ�¾�������
        count++;
    }
    //�����ǵڶ����㷨��Ч�ʽϵ���ѭ��32��
    //int i;
    //for (i = 0; i < 32; i++)//��λ��
    //{
        //if (((n >> i) & 1) == 1)//��λ��
        //{
            //count++;
        //}
    //}
    // �����ǵ�һ���㷨
    //while (n)
    //{
      //  if (n % 2 == 1)
        //{
           // count++;//�����ܼ���-1
        //}
        //n = n / 2;
   // }
    return count;
}
int main()
{
    int a = 0;
    scanf_s("%d", &a);
    int count = count_bit_one(a);
    printf("count=%d\n", count);
}