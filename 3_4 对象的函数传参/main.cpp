#include<iostream>
using namespace std;
template<class NameType,class HpType>
class Hero
{
public:
	Hero(NameType name,HpType hp)
	{
		this->m_name = name;
		this->m_hp = hp;
	}
private:
	NameType m_name;
	HpType m_hp;
};
//1.直接指定
void test1(Hero<string, double>& h)
{

}
//2.参数模板化
template<class T1,class T2>
void test2(Hero<T1, T2>& h)
{

}
//3.类模板化
template<class T>  //通用性最高，兼容所有类型
void test3(T& h)
{

}
int main()
{
	Hero<string, double> h("宋江", 100.0); //必须显示指出类型
	test1(h);
	test2(h);
	test3(h);
	return 0;
}