# include<iostream>
using namespace std;
int main()
{
	int t,n;
	double x;
	cin >> t;
	while (t--)
	{
		double max = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{

			cin >> x;
			if (x > max)
				max = x;

		}
		printf("%.2lf", max);

	}
	return 0;
}