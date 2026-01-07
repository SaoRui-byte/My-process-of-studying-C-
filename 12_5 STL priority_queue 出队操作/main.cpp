#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> q;
	q.push(6);
	q.push(9);
	q.push(3);
	q.push(17);

	//出队就是删除顶部
	for (int i = 0; i < 4; i++)
	{
		cout << q.top() << endl;
		q.pop();
	}

	return 0;
}