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

void bubbleSort(vector<int>& a)
{
	int n = a.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j<n-1-i;j++)   //循环后最大的换到了最后面，最后的元素不用继续遍历  
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(6);
	v.push_back(2);
	v.push_back(8); 
	v.push_back(7);
	v.push_back(0);
	printVector(v);
	bubbleSort(v);
	printVector(v);
	return 0;
}