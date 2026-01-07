#include<iostream>
using namespace std;

class DynamicArray
{
private:
	int* elements;
	int size;
public:
	DynamicArray(int n):size(n)
	{
		elements = new int[size];
		
	}
	~DynamicArray()
	{
		delete[] elements;
	}
	int& operator[](int index) //引用是为了对其值直接修改
	//类的成员函数有权访问自身的私有成员，内部接口，写接口的
	{
		return elements[index];
	}
};
int main()
{
	DynamicArray da(100);
	da[1] = 3;
	da[9] = 4;
	cout << da[0] << ' ' << da[1] << endl;


	return 0;
}