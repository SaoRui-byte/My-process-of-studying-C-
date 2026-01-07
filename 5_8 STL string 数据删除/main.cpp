#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Hello woooorld";
	//1.
	s1.erase();//删完了
	cout << s1 << endl;
	//2.
	s1 = "Hello woooorld";
	s1.erase(7);//第七个位置后面的全部删除了
	cout << s1 << endl;
	//3.
	s1 = "Hello woooorld";
	s1.erase(7, 3);//从第七个开始，删除3个
	cout << s1 << endl;
	//4.
	s1 = "Hello woooorld";
	s1.erase(s1.begin());//传入迭代器,只删除一个字符
	cout << s1 << endl;

	s1.clear();//当 erase() 无参数时，效果与 clear() 一致（清空全部）
	s1.capacity();//capacity() 是已分配内存可容纳的最大字符数（通常 ≥ size，预留空间以减少频繁扩容的开销）。
	return 0;
}