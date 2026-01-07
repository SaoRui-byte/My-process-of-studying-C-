#include<iostream>
#include<vector>
using namespace std;

void printVector(const vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void merge(vector<int>& a, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	vector<int> temp(n1 + n2);
	for (int i = 0; i < n1; i++)
	{
		temp[i] = a[l+i];   //注意要有偏移量
	}
	for (int i = 0; i < n2; i++)
	{
		temp[n1 + i] = a[l+n1 + i];
	}
	int i = 0, j = n1, k = l;
	while (i < n1 && j < n1 + n2)
	{
		if (temp[i] < temp[j])
		{
			a[k++] = temp[i++];
		}
		else
		{
			a[k++] = temp[j++];
		}
	}
	while (i < n1)
	{
		a[k++] = temp[i++];
	}
	while (j < n1 + n2)
	{
		a[k++] = temp[j++];
	}
}


void mergeSort(vector<int>& a, int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int m = (l + r) / 2;
	mergeSort(a,l, m);
	mergeSort(a, m + 1, r);
	merge(a, l, m, r);
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(6);
	v.push_back(4);
	v.push_back(8);
	v.push_back(9);
	v.push_back(0);

	printVector(v);
	mergeSort(v,0,v.size()-1);
	printVector(v);
	return 0;
}