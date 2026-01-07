#include<iostream>
#include<queue>
using namespace std;

//q.pop()
int main()
{
	queue<int> q;
	for (int i = 0; i < 5; i++)
	{
		q.push(i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << q.front() << " " << q.back() << endl; //队尾插入，队首出队，特点：先进先出！
		q.pop();
	}

	return 0;
}