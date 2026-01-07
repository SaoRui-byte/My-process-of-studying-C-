/*
//三角形
#include<iostream>
#include<algorithm>

using namespace std;
double a[3];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);  //左闭右开原则,直接修改实参的值
		if (a[0] + a[1] > a[2])
		{
			cout << "yes" << endl;

		}
		else
		{
			cout << "no" << endl;
		}
	}

}
*/



/*
//判断素数
#include<iostream>
using namespace std;

bool isPrime(int x)
{
	for (int i = 2; i*i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
		return true;

	}
}
int main()
{
	int x, y;
	while (cin >> x >> y)
	{
		if (!x && !y)
		{
			break;
		}
		bool flag = false;
		for (int i = x; i <= y; i++)
		{
			int z;
			z = i * i + i + 41;
			if (!isPrime(z))
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << "SORRY" << endl;
		}

	}
	return 0;
}
*/


#include<iostream>
using namespace std;

int calcu(int n)
{
	int x,cnt = 0;
	int b[] = { 100,50,20,10,5,2,1 };
	for (int i = 0; i < 7; i++)
	{
		x = n / b[i];
		n %= b[i];
		cnt += x;
	}
	return cnt;

}

int main()
{
	int n,x;
	while (cin >> n&&n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			sum += calcu(x);
		}

		cout << sum << endl;

	}

	return 0;
}