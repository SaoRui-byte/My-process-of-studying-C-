#include<iostream>
using namespace std;

template<typename T> //typename也可以写成class，一个意思
class DynamicArray
{
private:
	T* elements;
	int size;
public:
	DynamicArray(int n); 
	//默认析构函数是:仅释放对象本身的内存（栈上的成员变量，如 size）
	~DynamicArray(); //由于类中使用了 new[] 动态分配内存，必须手动编写析构函数以避免内存泄漏。如果需要对象的拷贝操作，还需补充拷贝构造函数和拷贝赋值运算符。

	T& operator[](int index);

	//更新第 index 个索引的元素，把它的值修改为value
	void update(int index, T value); //类内实现

};
template<typename T>  //类外实现定义
//因为模板函数的 template<typename T> 声明作用域仅限于紧随其后的那个函数
DynamicArray<T>::DynamicArray(int n):size(n)
	{
		elements = new T[size];
	 }

template<typename T>
DynamicArray<T>::~DynamicArray()
{
	delete[] elements;
}
template<typename T>
T& DynamicArray<T>::operator[](int index)  //有返回值的话，作用域声明要加在返回值和成员函数之间。
{
	return elements[index];
}

template<typename T>
void DynamicArray<T>::update(int index, T value)  //这里的<T>是指定虚拟类型
{
	elements[index] = value;
}
int main()
{

	DynamicArray<char> dac(10);
	dac[0] = 'A', dac[1] = 'C', dac[2] = 'M';
	cout << dac[0] << dac[1] << dac[2] << endl;
	dac.update(3, '!');
	cout << dac[0] << dac[1] << dac[2] <<dac[3]<< endl;
	return 0;
}