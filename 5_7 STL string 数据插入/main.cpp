#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Heworld";
	s1.insert(2,2,'l'); //在第3个位置加上2个l,只能传入字符
	cout << s1 << endl;
	s1.insert(4, "o ");
	cout << s1 << endl;
	s1.insert(s1.size(),"!");
	cout << s1 << endl;
	s1.insert(s1.begin(), '1');//传入迭代器，只能插入字符
	cout << s1 << endl;
	return 0;
}