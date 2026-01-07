#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s;
	while (cin >> s)
	{
		string ret = "";
		char max = 'a';
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= max)
			{
				max = s[i];
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			ret = ret + s[i];
			if (s[i] == max)
			{
				ret += "(max)";
			}
		}
		cout << ret << endl;
	}

	return 0;
}