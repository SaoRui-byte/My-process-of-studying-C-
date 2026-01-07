//内存四区：代码区    全局区    栈区    堆区
//代码区：只读，共享
//全局区：主要存放 全局变量，全局常量，静态变量，字符串常量
//							 static     const修饰全局常量才在全局区
//栈区：由编译器自动分配和释放，存放函数的参数值、局部变量等。（形参和局部变量）
//      不要返回局部变量的地址，内存会坏掉，返回的是野指针。
//堆区：
// 用于动态内存分配，由程序员手动分配和释放，如果程序员不释放，程序结束时由操作系统回收
//		C语言：malloc  free    函数
//      CPP  ：new     delete  运算符

#include<iostream>
using namespace std;
int* getV(int v)
{
	int* a = new int(v);//int *a 是一个栈上的变量
}

int main()
{

	return 0;
}