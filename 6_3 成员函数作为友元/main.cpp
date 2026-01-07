#include<iostream>
#include<string>
using namespace std;
//成员函数作为友元
class People;

class PeopleFriend
{
public:
	PeopleFriend()
	{

	}
	void visitAll(People* p);
	void visitPub(People* p);

};

class People
{
	friend void visitAll(People* p);//放过去就好了
public:
	People()
	{
		m_House = "别墅";
		m_Car = "跑车";
	}
public:
	string m_House ;
private:
	string m_Car;
};

int main()
{

	return 0;
}