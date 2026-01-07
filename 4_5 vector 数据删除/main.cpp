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
	vector<int> v = { 9,8,5,2,1,1 };
	//1.pop_back()  //删掉最后一个元素
	v.pop_back();
	printVector(v);

	//2.erase(迭代器)   可以实现中间删除
	vector<int>::iterator it = v.erase(v.begin()); //相当于传的位置,会返回一个迭代器,指向刚才删除的下一个位置
	printVector(v);
	cout << *it << endl;

	//3.clear()    全部删掉
	v.clear();
	printVector(v);

	return 0;
}