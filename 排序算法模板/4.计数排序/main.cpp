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

void countingSort(vector<int>& a,int min,int max)
{
	int n = a.size();
	int* count = new int[max - min + 1];  //索引是0 -----> (max-min)
	memset(count, 0, sizeof(int) * (max - min + 1));
	for (int i = 0; i < n; i++)
	{
		count[a[i]-min]++;   //要有偏移量
	}
	int idx = 0;
	for (int i = 0; i < max - min+1; i++)
	{
		while (count[i] > 0)   //同理
		{
			a[idx++] = i+min;
			count[i]--;
		}
	}
	delete[] count;

}

int main()
{
	vector<int> v;
	v.push_back(99);
	v.push_back(94);
	v.push_back(99);
	v.push_back(92);
	v.push_back(94);
	printVector(v);
	countingSort(v,92,99);
	printVector(v);
	return 0;
}