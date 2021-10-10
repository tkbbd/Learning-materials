#include <stdio.h>
int my_strlen(char* str)
{
	int count=0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//void reverse_string(char arr[])
//{
	//实现思路：1.逆序reverse_string("d b c d e f");   2.a和f的交换;     3.逆序reverse_string(" b c d e ")，然后交换b和e,依次类推;//
	//逆序过程：1.第一步：把a里的字符提出来 2. 第二步：把f放到第一位的位置里 3.第三步：把\0放到f最初的位置去，逆序中间的字符串"b c d e" 4.第四步：把刚刚的a提出来的字符放到\0的的位置去
	//char tmp = arr[0];//第一步
	//int len = my_strlen(arr);//计算字符串的长度
	//arr[0] = arr[len - 1];//第二步
	//arr[len - 1] = '\0';//第三步
	//if(my_strlen(arr+1)>=2)//递归终止条件,因为变化的是首元素的地址，那么arr+1=1(这个式子的意思是首元素和末尾元素是同一个下标,即只有一个元素)或arr+1=0(没有任何元素)时字符串长度就是，递归终止
	//reverse_string(arr + 1);
	//arr[len - 1] = tmp;//第四步
//}
void reverse_string(char arr[])
{//执行过程:1.a和f的交换，2.逆序reverse_string("b c d e")
	char tep = arr[0];//1,拿出'a'
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];//2.把'f'放到下标为0的地方
	arr[len - 1] = '\0';//把'\0'放到原f的位置
	if (my_strlen(arr + 1) >= 2)//判断条件：当数组长度+1小于等于2，说明只有一个字符或没有字符，递归结束
	{
		reverse_string(arr + 1);//3.进入bcde的逆序，这里是取bcde数组的首元素地址
	}
	arr[len - 1] = tep;//4.再把'a'放到原f的位置,现在是'\0'处
}
int main()
{
	char arr[] = "abcdef";//这是个字符串,所以还有个‘\0’这个字符在f的后面
	
	reverse_string(arr);
	
	printf("%s\n", arr);
}