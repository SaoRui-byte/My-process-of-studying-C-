#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator item = v.begin(); item != v.end(); item++)
	{
		cout << *item << ' ';
	}
	cout << endl;
}

/*
容量: capacity()
大小: size()
扩容机制：当capacity = size时，增加元素时，capacity要*1.5或2，具体情况看编译器,下取整。
*/
int main()
{
	vector<int> v1 = { 9,8,7,6 };
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;

	v1.push_back(3);
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;

	v1.push_back(1);
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;

	v1.push_back(2);
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;
	

	//2.resize()  改变size大小   
	v1.resize(18);//size改为18，多余的补0
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;
	printVector(v1);

	v1.resize(20, 6);//size改为20，多余的补6
	printVector(v1);

	v1.resize(100); //扩容一次发现不够时，直接把capacity赋值为size
	
	v1.resize(5); 
	cout << "v1.size() = " << v1.size() << endl;
	cout << "v1.capacity() = " << v1.capacity() << endl;  //不会缩容
	printVector(v1);
	return 0;
}