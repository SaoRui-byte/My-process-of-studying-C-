#include<iostream>
#include<queue>
using namespace std;

//q.front()
int main()
{
	queue<int> q;
	for (int i = 5; i >= 1; i--)
	{
		q.push(i);
		cout << q.front() << ' ';
	}

	return 0;
}