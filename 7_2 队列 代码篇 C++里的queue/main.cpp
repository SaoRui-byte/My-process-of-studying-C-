#include<iostream>
#include<queue>
using namespace std;
//队尾插入,队首先出

int main()
{
	queue<int>q;
	q.push(1);
	q.push(3);
	q.push(2);
	q.push(4);

	while (!q.empty())
	{
		cout << q.front() << endl;  //最前面的元素
		q.pop();  //弹出
	}

	return 0;
}