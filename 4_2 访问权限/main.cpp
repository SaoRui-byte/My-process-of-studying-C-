#include<iostream>
using namespace std;
/*
访问权限
公共权限	public		类内可以访问，类外也可以访问
保护权限	protected   类内可以访问，类外不可以访问	子类可以访问
私有权限	private		类内可以访问，类外不可以访问	子类不可以访问

B -> A

A  父类、基类		名字、房子、支付密码
B  子类、派生类		公共、保护、私有
*/

class People
{
public:
	int m_Id;
protected:
	int m_HouseId;
private:
	int m_PayPass;
public:
	void work()
	{
		m_Id = 3;
		m_HouseId = 2;
		m_PayPass = 1314;
	}
private:
	void work1()
	{
		m_Id = 1;
		m_HouseId = 2;
		m_PayPass = 1314;
	}
};

int main()
{
	People p;
	p.work();
	cout << p.m_Id << endl;
	p.m_Id = 1;
	
	cout << p.m_Id << endl;
	return 0;
}