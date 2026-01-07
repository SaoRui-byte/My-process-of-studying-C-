#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Hello Wooooorld";
	string sub = s1.substr(7, 5);//从第七个位置开始，找到后面的五个
	cout << sub << endl;

	string s2 = "英雄哪里出来&&夜深人静写算法";
	int pos = s2.find("&&");
	string s3 = s2.substr(0, pos);
	cout << s3 << endl;
	string s4 = s2.substr(pos + 2);  //后面不传，就是获取到最后
	cout << s4 << endl;
	return 0;
}