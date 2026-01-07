#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1.无参构造
	string s1;
	cout << s1 << endl; //空字符串

	//2.初始化列表
	string s2({ 'h','e','l','l','o' });
	cout << s2 << endl;

	//3.字符串的初始化
	string s3("英雄哪里出来");
	cout << s3 << endl;

	//4.字符串的前n个字符
	string s4("英雄哪里出来",6);//取决于一个中文字符占了几个英文字符,编码原因,奇数的话直接切断
	cout << s4 << endl;

	//5.拷贝构造函数
	string s5(s2);
	s5[1] = 'a';
	cout << s5 << endl;

	//6.a个字符b
	string s6(8, 'a');
	cout << s6 << endl;
	return 0;
}