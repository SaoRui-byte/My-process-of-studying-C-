#include<iostream>
#include<queue>
using namespace std;
//1.empty()
//2.size()
int main()
{
	queue<int> q;
	for (int i = 0; i < 5; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		q.pop();
	}

	return 0;
}