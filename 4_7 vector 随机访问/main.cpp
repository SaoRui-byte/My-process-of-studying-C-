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
	vector<int> v = {9,8,7,6,5};
	cout << v[2] << endl; //像数组一样
	cout << v.at(2) << endl; //有异常处理,检测下标有无越界
	return 0;
}