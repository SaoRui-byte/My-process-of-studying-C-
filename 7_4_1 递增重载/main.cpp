#include<iostream>
using namespace std;
/*
++

前置++
后置++
*/
class Complex
{
	friend ostream& operator<<(ostream& c, const Complex& a);
public:
	Complex():real(0),image(0)
	{ }
	Complex(int real, int image)
	{
		this->image = image;
		this->real = real;
	}

	Complex& operator++() //前置++
	{
		this->real += 1;
		return *this;
	}
	Complex operator++(int) //后置++
	{
		Complex c = *this;
		this->real += 1;
		return c;
	}
private:
	int real;
	int image;
};
ostream& operator<<(ostream& c, const Complex& a)
{
	c << a.real << '+' << a.image << 'i';
	return c;
}
int main()
{
	Complex a(10, 10);
	cout << a << endl;
	//++a;
	cout <<++a << endl;
	cout << a++ << endl;
	//一句话总结：左值是 “有地址、能修改” 的持久对象；右值是 “没地址、只读” 的临时值。
	return 0;
}

//int b = 5;
//((b++)++)后置++不被允许

/*
左值和右值：
1. 左值（Lvalue）
本质：有 持久内存地址 的对象（可通过 & 取地址）。
规则：能出现在赋值运算符 = 左边（可修改，除非被 const 修饰）。
例子：
变量（int a、Complex c）；
返回左值引用的表达式（如 ++x、cout << ...）；
字符串字面量（"hello"，存静态内存区，可寻址）。

2. 右值（Rvalue）
本质：临时值（无持久内存，或即将销毁的对象）。
规则：只能出现在赋值运算符 = 右边（天生只读，无法修改）。
例子：
字面量（10、true、3.14）；
表达式结果（a + b、x-- 的返回值）；
函数返回的临时对象（如 std::string("hi")）。


const Type& 可以绑定到右值
*/