#include <stdio.h>
//void main()
//{
	//int a = 1;
	//char* p = (char*)&a;//强制类型转换,因为如果用char*p直接访问int类型的i，会导致类型不兼容,所以需要把&a强制类型转换成char*
	//if (&p == 1)//低地址存放数据低位
	//{
		//printf("小端\n");
	//}
	//else
	//{
		//printf("大端\n");
	//}
//}
//int check_sys()
//{
	//int a = 1;
		//return *(char*)&a;
//}
//void main()
//{
	//int ret = check_sys();
	//if (ret == 1)
	//{
		//printf("小端\n");
	//}
	//else
	//{
		//printf("大端\n");
	//}
//}
//void main()
//{
	//char a = -1;
	//11111111，内存中的补码
	//打印时又转换成源码，1000000.。。。001，就是-1
	//unsigned char b = -1;
	//11111111，内存中的补码
	//打印时又转换成源码，1000000.。。。001，就是-1
	//signed char c = -1;
	//11111111，内存中的补码
	//打印时需整形提升，无符号数的符号位是0，变成int型就是000.....0011111111,正数源反补相同，打印出来就是255
	//printf("%d\n%d\n%d\n",a,b,c);

	//int a = -128;
	//10000.。。。10000000 - 源码
	//11111.....0010000000 - 补码
	//整形提升时:负数用1，那么补码就是111.。。。10000000
	//因为要打印的是无符号数，那么源反补相同，源码也是111.。。10000000直接转换成十进制
	//printf("%u\n",a);//%u打印无符号十进制数字
//}
//void main()
//{
	//int a = -20;
	//11111111 11111111 11111111 11101011 - 补码
	//unsigned int b=10;
	//00000000 00000000 00000000 00001010 - 补码
	//11111111 11111111 11111111 11110110 - 两个补码相加后的结果，此处是补码形式
	//10000000 00000000 00000000 00001010 - 将结果转换成源码，其十进制表达为-10
	//printf("%d",a+b);
//}
void main()
{
	unsigned int i;
	for (i = 9; i >= 0; i++)//在i=0时，程序继续执行，直到i=-1,-1在无符号数中是非常大的正整数，程序陷入死循环
	{
		printf("%u\n",i);
	}
}


	
