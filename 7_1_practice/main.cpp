#include<iostream>
#include<cmath>
using namespace std;
double a[51][6];
double sa[51];
double ca[6];
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			sa[i] = 0;
			for (int j = 0; j < m; j++)
			{
				sa[i] += a[i][j];
			}
			sa[i] /= m;
		}
		for (int i = 0; i < m; i++)
		{
			ca[i] = 0;
			for (int j = 0; j < n; j++)
			{
				ca[i] += a[j][i];

			}
			ca[i] /= n;
		}
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] >= ca[j])
				{
					sum++;
	
				}
				
			}
			if (sum == m)
			{
				cnt++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (i)
			{
				cout << ' ';
			}
			printf("%.2lf", sa[i]);

		}
		cout << endl;
		for (int i = 0; i < m; i++)
		{
			if (i)
			{
				cout << ' ';
			}
			printf("%.2lf", ca[i]);

		}
		cout << endl;
		cout << cnt << endl;

	}
	return 0;
}