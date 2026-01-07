#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//先将数据分为多个数据组，每个数据范围内进行排序，最后按顺序取出即可

int main()
{

	return 0;
}