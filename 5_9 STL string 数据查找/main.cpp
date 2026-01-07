#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Hello Wooooorld";
	//1.
	cout << s1.find("oooo") << endl;//返回的是一个位置
	//2.
	cout <<s1.find("oooo", 8) << endl;//从第八个位置开始找，没有找到返回-1
	//3.
	cout << s1.find('o',5) << endl;//从第五个位置加1
	
	//4.
	cout << s1.rfind("oo") << endl;//从右边开始找

	return 0;
}