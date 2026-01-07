/*
#include <iostream>
using namespace std;

int main()
{
	char a[] = "I";
	char b[] = "love";
	char c[] = "you";
	//指针数组 
	char* p[3];
	p[0] = a;
	p[1] = b;
	p[2] = c;
	for (int i = 0; i < 3; i++)
	{
		cout << p[i] << ' ';
	}
	cout << endl;

	int mat[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int* pmat[3];
	pmat[0] = mat[0];
	pmat[1] = mat[1];
	pmat[2] = mat[2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << *(pmat[i] + j) << ' ';
		}
		cout << endl;
	}

	return 0;
}
*/ 

/*
//数组指针  int (*p)[5],可以理解为指向一个二维数组的首地址,指向第一行,括号里是列数。
			数组指针是一个值，数组指针指向一整个数组，不指向具体某一个元素，是二级指针。
#include<iostream>
using namespace std;
int main()
{
	int (*p)[5];
	int a[4][5] = {
		{4,3,2,1,0},
		{9,8,7,6,5},
		{6,7,8,9,0},
		{5,6,7,8,9}
	};
	p = a;

	return 0;
}
*/

//指针数组和数组指针
#include<iostream>
using namespace std;

string getHex(int x)
{
	char buff[10];
	sprintf_s(buff, "%X", (x & 0XFFFF)); // &0XFF 提取低8位			 &0XFFFF  提取低16位
	return (string)buff;				//		  16进制的后2位				  16进制的后4位

}



int main()
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j)
			{
				cout << ',';
			}
			int* p = &a[i][j];
			cout <<getHex((int) p);
		}
		cout << endl;
	}
	return 0;
}