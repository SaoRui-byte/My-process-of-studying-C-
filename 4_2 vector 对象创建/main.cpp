#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;
}
int main()
{
	//1.默认构造函数
	vector<int> v1; //不会放进去任何东西 默认size为0
	cout << "v1:";
	printVector(v1);

	//2.初始化列表
	vector<int> v2_1 = { 9,8,7,6,5,4 };
	cout << "v2_1:";
	printVector(v2_1);

	vector<int> v2_2({ 9,8,7,6,5,4 });
	cout << "v2_2:";
	printVector(v2_2);

	//3.迭代器
	vector<int> v3(v2_1.begin(), v2_1.end()); //左闭右开
	cout << "v3:";
	printVector(v3);

	//4.全0初始化
	vector<int> v4(8); //传入一个数字，默认为申请的元素个数,值初始化为0
	cout << "v4:";     //char 类型的零值是 '\0'（空字符，ASCII 码为 0，不可见）；
	printVector(v4);

	//5.vector<int> 变量名(a,b);    申请a个空间的元素，每个元素的值初始化为b
	vector<int> v5(8, 6);
	cout << "v5:";
	printVector(v5);

	//6.拷贝构造函数
	vector<int> v6(v2_2);
	cout << "v6:";
	printVector(v6);



	return 0;
}