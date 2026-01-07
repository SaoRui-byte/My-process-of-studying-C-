#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> d = { 1,2,3,4,5,6 };
	cout << d[2] << endl;
	cout << d.at(2) << endl;

	d.front();//Ê×ÔªËØ
	d.back();//Î²ÔªËØ
	return 0;
}
