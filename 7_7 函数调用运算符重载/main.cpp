#include<iostream>
using namespace std;
//()
//add()
class AddFunctor
{
public:
	int operator() (int a,int b)
	{
		return a + b;
	}
};
int main()
{
	AddFunctor add;
	cout << add(5, 6) << endl;
	return 0;
}
//只要对象还活着，a 就活着，值会保留；对象死了，a 也跟着死了