#include<iostream>
using namespace std;
class BaseA
{
public:
	int m_A;
	int m_Base;
	BaseA() :m_A(0), m_Base(520)
	{

	}

};
class BaseB
{
public:
	int m_B;
	int m_Base;
	BaseB() :m_B(0), m_Base(1314)
	{

	}

};
class BaseC
{
public:
	int m_C;
	BaseC() :m_C(0)
	{

	}

};

class Son : public BaseA, public BaseB, public BaseC
{
	
};
int main()
{
	Son s;
	return 0;
}