#include<iostream>
#include<string>
using namespace std;

//C语言里的strcat
int main()
{
	//1.+
	string s1 = "英雄";
	string s2 = "出来";
	cout << s1 + s2 +':' << endl;


	//2.+=
	//3.append
	string s3 = "英雄";
	string t3 = "联盟";
	s3.append(t3);
	s3.append("5201314", 3); //取前三个
	cout << s3 << endl;
	s3.append("5201314", 3, 4);//从第三个开始,取后面四个
	cout << s3 << endl;

	//4.push_back
	string s4 = "英雄编程";
	s4.push_back('6');
	s4.push_back('6');
	//push_back只能是一个字符
	return 0;
}