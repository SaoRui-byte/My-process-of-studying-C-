#include<iostream>
#include<vector>
using namespace std;
void remove1(vector<int>& v, int index)   //执行效率低
{
	v.erase(v.begin() + index);
}

void remove2(vector<int>& v, int index) //不考虑顺序，执行
{
	swap(v[index], v.back());
	v.pop_back();
}


void printVector(const vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
}
int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	remove1(v, 4);
	printVector(v);
	return 0;
}