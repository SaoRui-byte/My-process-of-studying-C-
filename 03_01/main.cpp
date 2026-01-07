//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	float a = 3.1415926;
//	double b = 3.1415926;
//	double c = 1.5e5;
//	double d = 1.5e-5;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl << d << endl;
//}

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	//int a;
	//cin >> a;
	//cout << a << endl;

	//double b;
	//cin >> b;
	//cout << b << endl;

	//char c;
	//cin >> c;
	//cout << c;

	//string b = "ÄãºÃ°¡";
	//cin >> b;
	//b[1] = 'a';
	//cout << b[1] << endl;

	bool a = false;
	cin >> a;
	cout << a << endl;

	string b = "";
	getline(cin,b);
	cout<<b;
}