#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator item = v.begin(); item != v.end(); item++)
	{
		cout << *item << ' ';
	}
	cout << endl;
}

int main()
{
	vector<int> v;
	//1.push_back()   末尾插入
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	printVector(v);

	//2.insert()
	v.insert(v.begin(), 888); // 插在了begin()位置
	v.insert(v.begin() + 1, 666); //插在了对应的位置
	printVector(v);
	return 0;
}