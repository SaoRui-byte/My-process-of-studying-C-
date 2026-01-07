#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
	unordered_map<string, int> hash;
	hash["Aaaaa"] = 6;
	hash["XXXX"] = 9;
	cout << hash["Aaaaa"] << endl;
	cout << ++hash["Aaaaa"] << endl;

	if (hash.find("Aaaaa") != hash.end())
	{
		cout << "find" << endl;
	}

	hash.erase("Aaaaa");
	return 0;
}