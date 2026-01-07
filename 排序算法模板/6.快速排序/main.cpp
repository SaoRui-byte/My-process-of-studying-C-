#include<iostream>
#include<vector>
using namespace std;

//在这段快速排序的实现中，基准值 x 最终一定会被交换到 “分割左右两部分的位置”
//但这个位置不一定是数组的 “物理正中间”，而是逻辑上的 “中间”
//即左边所有元素都≤x，右边所有元素都≥x的分割点。

void printVector(const vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int patition(vector<int>& a, int l, int r)
{
	int idx = l + rand() % (r - l + 1);
	swap(a[l], a[idx]);
	int i = l, j = r;
	int x = a[l];
	while (i < j)
	{
		while (i<j && a[j]>x)
		{
			j--;
		}
		if (i < j)
		{
			swap(a[i], a[j]);
			i++;
		}
		while (i < j && a[i] < x)
		{
			i++;
		}
		if (i < j)
		{
			swap(a[i], a[j]);
			j--;
		}
	}
	return i;
}

void quickSort(vector<int>& a,int l,int r)
{
	if (l >= r)
	{
		return;
	}
	int pivox = patition(a, l, r);
	quickSort(a, l, pivox);
	quickSort(a, pivox + 1, r);
}

int main()
{
	vector<int> v = { 1,3,4,2,5,6,7,8 };
	printVector(v);
	quickSort(v,0,v.size()-1);
	printVector(v);
	return 0;
}