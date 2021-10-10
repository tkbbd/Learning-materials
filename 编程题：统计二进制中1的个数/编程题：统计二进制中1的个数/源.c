#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_bit_one(unsigned int n)
{
    int count = 0;
    while (n)//这种算法相当高效
    {
        n = n & (n - 1); //假如n=13，即1101，那么13-1=12,即1100,这两者&一下，就是1100这样循环到=0为止，这样就能得到1的数量，实在不懂计算一下就明白了
        count++;
    }
    //以下是第二种算法，效率较低需循环32次
    //int i;
    //for (i = 0; i < 32; i++)//按位与
    //{
        //if (((n >> i) & 1) == 1)//按位与
        //{
            //count++;
        //}
    //}
    // 以下是第一种算法
    //while (n)
    //{
      //  if (n % 2 == 1)
        //{
           // count++;//但不能计算-1
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