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

void insertionSort(vector<int>& a)
{
	int n = a.size();
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > x)
			{
				a[j + 1] = a[j];   //找到大的往后移
			}
			else
			{
				break;
			}
		}
		a[j + 1] = x;
	}
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(8);
	v.push_back(3);
	v.push_back(4);
	v.push_back(9);
	printVector(v);
	insertionSort(v);
	printVector(v);
	return 0;
}