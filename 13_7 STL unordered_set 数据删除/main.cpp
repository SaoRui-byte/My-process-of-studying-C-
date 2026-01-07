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
	//erase()  可传入迭代器和直接对应的元素,还有迭代器的某一段
	//s.clear() 全部清除
	unordered_set<int> s = { 1,2,3,4,5 };
	s.erase(3);
	printUSet(s);


	return 0;
}