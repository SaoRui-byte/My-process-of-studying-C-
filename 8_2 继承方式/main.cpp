#include<iostream>
using namespace std;
/*
class 子类 : 继承方式 父类{};

公共 public
保护 protected
私有 private

3 x 3 = 9
								父类 访问权限
					|public      |  protected     |private
子类	public		|public	     |   protected    |无法访问
继承   protected	|protected   |  protected     |无法访问
方式     private	|private     |	 private      |无法访问

验证：
public:			类内可以访问，类外也可以访问
protected：		类内可以访问，类外不可访问，且子类可以访问
private:		类内可以访问，类外不可访问，且子类不可访问
*/
class Animal
{
public:
	int m_pub;
protected:
	int m_pro;
private:
	int m_pri;
};

class Cat : public Animal
{
public:
	Cat()
	{
		m_pub = 1;
		m_pro = 2;
		//m_pri = 3;   父类私有成员，子类公有继承，无法访问
	}
};
class BossCat :public Cat
{
public:
	BossCat()
	{
		m_pro = 2; //父类是保护成员，子类也是

	}

};
void testCat()
{
	Cat c;
	c.m_pub = 1;
	//c.m_pro = 2; 保护成员，类外不可访问
}

class Dog : protected Animal
{
public:
	Dog()
	{
		m_pub = 1;
		m_pro = 2;
		//m_pri = 3;   父类私有成员，子类保护继承，无法访问
	}

};
void testDog()
{
	Dog d;
	//d. m_pub = 1;

}
class Pig :private Animal
{
public:
	Pig()
	{
		m_pub = 1;
		m_pro = 2;
		//m_pri = 3;
	}
 };
void testPig()
{
	Pig p;
}
int main()
{

	return 0;
}