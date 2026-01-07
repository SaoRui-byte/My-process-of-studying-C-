#include<iostream>
#include<queue>
using namespace std;


//入队是push
int main()
{
	priority_queue<int> q1;  //默认的第三个参数是less<int>  大的先出
	q1.push(6);
	q1.push(1);
	q1.push(2);
	q1.push(5);
	q1.push(19);

	
	priority_queue<int, vector<int>, greater<int>> q2;  //小的先出

	q2.push(6);
	q2.push(1);
	q2.push(2);
	q2.push(5);
	q2.push(19);
	return 0;
}