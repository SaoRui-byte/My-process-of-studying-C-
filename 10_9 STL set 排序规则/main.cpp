#include<iostream>
#include<set>
using namespace std;

class CGaGa
{
public:
	CGaGa()
	{
		_name = "";
		_priority = -1;
	}

	CGaGa(string name, int pri) :_name(name), _priority(pri) {}

	bool operator<(const CGaGa& other) const
	{
		return _priority < other._priority;
	}
private:
	string _name;
	int _priority;
};

int main()
{
	set<CGaGa> s;
	s.insert(CGaGa("C++算法零基础", 5));
	s.insert(CGaGa("C++面向对象", 2));
	s.insert(CGaGa("C++泛型编程", 1));

	return 0;
}