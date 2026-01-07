#include<iostream>
using namespace std;
/*
+   
operator+ 的核心作用是重载 + 运算符，让自定义类型支持 + 运算，使代码更简洁、更符合直觉（比如复数加法直接写成 a + b，就像数学公式一样）
*/
class Complex
{
public:
	Complex() :real(0), image(0)
	{

	}
	Complex(int real, int image)  //构造函数无法在对象创建后手动调用
	{
		this->real = real;
		this->image = image;
	}
	Complex operator+(Complex& other)
	{
		Complex ret;
		ret.real = this->real + other.real;  //this指针的作用是明确表示 “当前正在操作的对象自己”
		ret.image = this->image + other.image;
		return ret;
	}
	void Print()
	{
		cout << real << '+' << image << 'i' << endl;
	}
private:
	int real;
	int image;
};
//Complex operator+(Complex& a,Complex& b)
//{
//	Complex ret;
//	ret.real =a.real + b.real;  //this指针的作用是明确表示 “当前正在操作的对象自己”
//	ret.image = a.image + b.image;
//	return ret;
//}
int main()
{
	Complex a(10, 20);
	Complex b(5, 8);
	Complex c = a + b;
	c.Print();
	return 0;
}