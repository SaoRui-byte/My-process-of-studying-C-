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

void selectionSort(vector<int>& a)
{
	int n = a.size();
	for (int i = 0; i < n - 1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_idx])
			{
				min_idx = j;   //把最小值的索引找出来
			}
		}
		int temp = a[i];
		a[i] = a[min_idx];
		a[min_idx] = temp;
	}
}

int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);
	v.push_back(1);
	v.push_back(9);
	v.push_back(4);
	v.push_back(3);
	v.push_back(7);

	printVector(v);
	selectionSort(v);
	printVector(v);
	return 0;
}