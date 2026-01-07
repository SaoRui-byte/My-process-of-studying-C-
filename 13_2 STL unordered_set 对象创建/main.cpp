#include<iostream>
#include<unordered_set>
using namespace std;

void printUSet(const unordered_set<int>& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	//1.默认构造函数
	unordered_set<int> s1;
	printUSet(s1);

	//2.初始化列表
	unordered_set<int> s2_1 = { 9,8,7,5,6,1,2,3,4 };
	printUSet(s2_1);

	unordered_set<int> s2_2({ 9,8,7,5,6,6,6,6,1,2,3,4 }); //与上面的方法一样
	printUSet(s2_2);

	//3.迭代器
	unordered_set<int> s3(s2_1.begin(), s2_1.end());
	printUSet(s3);   //不关心顺序

	//4.拷贝构造
	unordered_set<int> s4(s3);
	printUSet(s4);
	return 0;
}