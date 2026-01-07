#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.reserve(100);//预留capacity  100   v.reverse()是反转
	//reserve    修改的是capacity
	//size		 修改的是size
	return 0;
}