#include<iostream>
#include<queue>
using namespace std;



int main()
{
	priority_queue<int> q1;
	q1.push(6); cout << q1.top()<<endl;  //¶Ñ¶¥top()
	q1.push(1); cout << q1.top() << endl;
	q1.push(2); cout << q1.top() << endl;
	q1.push(5); cout << q1.top() << endl;
	q1.push(19); cout << q1.top() << endl;


	priority_queue<int, vector<int>, greater<int>> q2; 
	q2.push(6); cout << q2.top() << endl;
	q2.push(1); cout << q2.top() << endl;
	q2.push(2); cout << q2.top() << endl;
	q2.push(5); cout << q2.top() << endl;
	q2.push(19); cout << q2.top() << endl;
	return 0;
}