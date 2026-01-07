#include<iostream>
using namespace std;

template<typename T> //typename也可以写成class，一个意思
class DynamicArray
{
private:
	T* elements;
	int size;
public:
	DynamicArray(int n) :size(n)
	{
		elements = new T[size];
	}
	//默认析构函数是:仅释放对象本身的内存（栈上的成员变量，如 size）
	~DynamicArray() //由于类中使用了 new[] 动态分配内存，必须手动编写析构函数以避免内存泄漏。如果需要对象的拷贝操作，还需补充拷贝构造函数和拷贝赋值运算符。
	{
		delete[] elements;
	}
	T& operator[](int index)
	{
		return elements[index];
	}
};

int main()
{
	DynamicArray<int> da(10);
	da[0] = 1, da[2] = 1;
	DynamicArray<char> dac(10);
	dac[0] = 'A', dac[1] = 'C', dac[2] = 'M';
	cout << dac[0] << dac[1] << dac[2] << endl;
	return 0;
}