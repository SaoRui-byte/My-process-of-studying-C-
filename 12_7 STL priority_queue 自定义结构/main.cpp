#include<iostream>
#include<queue>
using namespace std;

struct type
{
	int key;
	int value;
	type():key(0),value(0){}
	type(int k,int v):key(k),value(v){}
	bool operator<(const type& t)const  //要自己定义比较大小的函数
	{									//最后的const不能丢  因为stl源码里有const
		return key < t.key;
	}
};

int main()
{
	priority_queue<type> q;
	q.push(type(6, 1));
	q.push(type(3, 2));  //会报错，不知道比较哪个的大小

	cout<<q.top().key<<endl;
	q.pop();
	cout << q.top().key << endl;

	return 0;
}