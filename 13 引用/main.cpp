#include <iostream>
using namespace std;
//用来实现与指针类似的功能
//引用：给变量取一个别名
//&
//数据类型& 变量名 = 变量
//可以理解为共用一块内存

//引用的特性(与指针的区别)：
//1.必须初始化
//2.初始化后无法修改

//引用的本质:就是一个指针常量
//
/*
int main()
{
	int a = 1314,c = 6;
	int& b = a;//同时改变
	b = c;
	cout << a << b << c << endl;


	return 0;
}
*/

/*
//引用传参
int countAndSum(int arr[], int size, int target, int& count)//直接修改传入参数的值
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == target)
		{
			count++;
			sum += arr[i];
		}
	}
	return sum;
}
//结构体传参是拷贝了一组数据，占内存，加上&就避免了拷贝
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int c = 0;
	int sum = countAndSum(arr, 10, 2, c);
	cout << sum << endl;
	return 0;
}
*/
//返回的是一个别名，函数可以修改,类型是int类型，但可以同步修改
int& getArrayValue(int arr[], int index)
{
	return arr[index];

}
//相当于返回了a[index],并且可以直接修改

//引用作为返回值
int main()
{
	int a[] = { 8,7,6,5,4,3 },c;
	int& d = getArrayValue(a, 3);
	cout << getArrayValue(a, 3) << endl;
	c = getArrayValue(a, 3); //相当于 c = a[3]
	getArrayValue(a, 3) = 999;//相当于 a[3] = 999
	cout << "c的值为:" << c << endl;
	d = 666;
	cout << getArrayValue(a, 3) << endl;
	return 0;
}