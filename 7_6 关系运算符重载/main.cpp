#include<iostream>
using namespace std;

class Point
{
public:
	Point(int x,int y):m_x(x),m_y(y){}
	bool operator==(const Point& other) const
//所以other虽然是另一个对象，但因为它是Point类的，Point的成员函数自然能访问它的私有成员。
	{
		return m_x == other.m_x && m_y == other.m_y;
	}
private:
	int m_x, m_y;

};

int main()
{
	Point a(1, 6),b(2, 5);
	if (a == b)
	{
		cout << "a和b相等" << endl;
	}
	return 0;
}