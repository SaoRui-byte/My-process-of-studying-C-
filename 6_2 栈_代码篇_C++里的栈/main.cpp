#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> intStk;
	stack<double> doubleStk;
	intStk.push(1);
	intStk.push(2);
	intStk.push(3);
	intStk.push(4);
	while (!intStk.empty())
	{
		cout << intStk.top() << ' ';
		intStk.pop();
	}
	cout << endl;
	return 0;
}

/*
empty()
push(v)
pop()
top()

*/