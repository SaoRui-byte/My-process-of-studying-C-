#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "I Love You 1314";
	//1.访问  (.size()不包括最后的/0,且是字节数，中文所占字节不确定)
	s[1];//debug会报错，release不会报错
	s.at(1);//这个会报错
	
	//2.修改
	s[11] = '5';
	s[12] = '2';
	s.at(13) = '0';
	s.at(14) = ' ';
	cout << s << endl;
	return 0;
}