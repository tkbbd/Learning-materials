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
	//ʵ��˼·��1.����reverse_string("d b c d e f");   2.a��f�Ľ���;     3.����reverse_string(" b c d e ")��Ȼ�󽻻�b��e,��������;//
	//������̣�1.��һ������a����ַ������ 2. �ڶ�������f�ŵ���һλ��λ���� 3.����������\0�ŵ�f�����λ��ȥ�������м���ַ���"b c d e" 4.���Ĳ����Ѹոյ�a��������ַ��ŵ�\0�ĵ�λ��ȥ
	//char tmp = arr[0];//��һ��
	//int len = my_strlen(arr);//�����ַ����ĳ���
	//arr[0] = arr[len - 1];//�ڶ���
	//arr[len - 1] = '\0';//������
	//if(my_strlen(arr+1)>=2)//�ݹ���ֹ����,��Ϊ�仯������Ԫ�صĵ�ַ����ôarr+1=1(���ʽ�ӵ���˼����Ԫ�غ�ĩβԪ����ͬһ���±�,��ֻ��һ��Ԫ��)��arr+1=0(û���κ�Ԫ��)ʱ�ַ������Ⱦ��ǣ��ݹ���ֹ
	//reverse_string(arr + 1);
	//arr[len - 1] = tmp;//���Ĳ�
//}
void reverse_string(char arr[])
{//ִ�й���:1.a��f�Ľ�����2.����reverse_string("b c d e")
	char tep = arr[0];//1,�ó�'a'
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];//2.��'f'�ŵ��±�Ϊ0�ĵط�
	arr[len - 1] = '\0';//��'\0'�ŵ�ԭf��λ��
	if (my_strlen(arr + 1) >= 2)//�ж������������鳤��+1С�ڵ���2��˵��ֻ��һ���ַ���û���ַ����ݹ����
	{
		reverse_string(arr + 1);//3.����bcde������������ȡbcde�������Ԫ�ص�ַ
	}
	arr[len - 1] = tep;//4.�ٰ�'a'�ŵ�ԭf��λ��,������'\0'��
}
int main()
{
	char arr[] = "abcdef";//���Ǹ��ַ���,���Ի��и���\0������ַ���f�ĺ���
	
	reverse_string(arr);
	
	printf("%s\n", arr);
}