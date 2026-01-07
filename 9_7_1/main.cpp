/*
#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 1, b = 2;
	swap(&a, &b);
	cout << a <<' '<< b << endl;
	return 0;
}
*/

/*
//指针函数(先看最后两个汉字，是函数)
#include<iostream>
using namespace std;

int* func()
{
	return NULL;

}

int* getArray(int a, int d, int n)  //返回一个数组，即返回首地址
{
	int* ret = new int[n];
	int i;
	for (i = 0; i < n; i++)
	{
		ret[i] = a + i * d;
	}
	return ret;
}

int main()
{

	return 0;
}
*/


//函数指针  函数名即可看成是一个地址，用函数指针存储
//函数指针赋值时，参数要匹配，返回值类型也要匹配
#include<iostream>
using namespace std;
//返回值
double  (*ptr)(int a, int b, int c);


int main()
{

	return 0;
}

//函数指针类型定义
void func1(int , int , int );
typedef void(*fptr)(int a, int b, int c);// typedef 返回值类型 (*新类型名)(参数列表);
fptr p1 = func1;


//函数指针数组 不推荐，见过就好
//1.第一种方式
typedef void(*fptrs[])(int a, int b, int c);
//				不一定要标长度
// 2.第二种方式(更常用) 类比于int a[] = {}
typedef void (*fptrs1)(int a, int b, int c);
fptrs1 pt[3] = {};
