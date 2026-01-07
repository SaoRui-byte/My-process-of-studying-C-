#include<iostream>  //iostream里包含了string头文件
#include<string>
using namespace std;

int main()
{
	char a[100] = "英雄哪里出处";
	cout << a << endl;  //全部打印出来
	cout << (void*)a << endl;  //打印地址
	string b = "英雄算法联盟";
	cout << b << endl;
	return 0;
}