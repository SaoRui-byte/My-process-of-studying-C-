# include <iostream>
using namespace std;
int main()
{
	int c = 0b100111;
	int d = 0b000100;
	cout << ((c | d) - d);
	return 0;

}