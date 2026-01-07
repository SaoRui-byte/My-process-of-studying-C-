#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1.compare
	string s1 = "aab";
	string t11 = "aab";
	int r11 = s1.compare(t11);  //大于返回1，小于返回-1;
	cout << r11 << endl;  //相等返回0，三值
	//长度短直接返回-1，长度长返回1;

	//2.<,>, =, >=,<=,==返回的要么是0要么是1，!=





	return 0;
}