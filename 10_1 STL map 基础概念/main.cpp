#include<iostream>
#include<map>
using namespace std;

int main()
{
	pair<int, int> p1;
	p1.first = 13;
	p1.second = 14;
	cout << p1.first << p1.second << endl;

	pair<int, string> p2(2, "Ò»ÈºÉµ±Æ"); //(a,b)
	cout << p2.first << p2.second << endl;

	pair<char, int> p3 = make_pair('5', 0); //make_pair(a,b)
	cout << p3.first << p3.second << endl;

	map<int, int> m;

	return 0;
}