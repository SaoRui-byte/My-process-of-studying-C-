#include<iostream>
#include<vector>
#include<algorithm>//算法接口，有sort,reverse
using namespace std;

void printVector(const vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
}

bool cmp(int a,int b)
{
	return a > b;   //True的话，a在b前面
}
int main()
{
	vector<int> v = { 9,8,7,1,2,3,4 };
	sort(v.begin(), v.end(), cmp);//默认递增,想递减的话，直接自定义一个函数
	printVector(v);
	return 0;
}