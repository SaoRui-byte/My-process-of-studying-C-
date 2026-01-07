#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> stk)
{
	while (!stk.empty())
	{
		cout << stk.top() << ' ';
		stk.pop();
	}
	cout << endl;
}

int main()
{
	stack<int> stk1;
	stack<int> stk2;
	
	stk1.push(1);
	stk1.push(2);
	cout << stk1.size() << endl;
	printStack(stk1);
	stk2 = stk1;//后面不受stk1的影响


	return 0;
}