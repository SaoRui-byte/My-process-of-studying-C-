#include<iostream>
#include<algorithm>
using namespace std;

struct Interval 
{
	int s;
	int e;

}I[100];
bool cmp(const Interval& a, const Interval& b) //这是&引用的用法，不需要复制内存，和直接传参差不多，
//注意传入指针是 int * a!!!
{
	return a.e < b.e;
}
int main()
{
	int n;
	while (cin >> n && n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> I[i].s >> I[i].e;
		}
		sort(I, I + n, cmp);
	}
	return 0;
}