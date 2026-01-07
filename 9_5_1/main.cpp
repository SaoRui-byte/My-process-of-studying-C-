/*
#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	//指针常量
	//指针是一个常量
	int* const p = &a;  //即p无法修改,但*p可以修改
	*p = 6;
	cout << "a = " << a << endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	//常量指针
	//指向常量的指针
	const int* p = &a;  //即*p不可以修改，但p可以修改
	return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 2;
	//常量指针常量
	const int* const p = &a; //即都不能修改
	return 0;
}


/*
指针常量		type* const			指针值是一个常量，指针无法被赋值
常量指针		const *type			指向常量的指针，指针解引后无法被赋值
常量指针常量	const *type const	指针值和指针指向的值都是常量，都无法被赋值

*/
