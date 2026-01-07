#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

void printVector(vector<int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int getDigit(int num, int d)  //获取数字num的第d位
{
	for (int i = 1; i <d; i++)
	{
		num /= 10;
	}
	return num % 10;
}

int maxDigit(vector<int>& a)
{
	if (a.empty())
	{
		return 0;
	}
	int max = *max_element(a.begin(), a.end());
	int digit = 0;
	while (max)
	{
		max /= 10;
		digit++;
	}
	return digit;
}

void radixSort(vector<int>& a)
{
	if (a.empty())
	{
		return;
	}
	int max_d = maxDigit(a);
	int radix = 10;  //奇数为10
	vector<queue<int>> queues(radix);
	for (int d = 1; d <= max_d; d++)
	{
		for (int i = 0; i < a.size(); i++)
		{
			int digit = getDigit(a[i], d);
			queues[digit].push(a[i]);
		}

		int idx = 0;
		for (int i = 0; i < radix; i++)
		{
			while (!queues[i].empty())
			{
				a[idx++] = queues[i].front();
				queues[i].pop();
			}
		}
	}


}

int main()
{
	vector<int> v = { 199,255,33,4,1,890,0,1000,20,11 };
	radixSort(v);
	printVector(v);
	return 0;
}