#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
	char* str;
	size_t length;
public:
	String();
	String(const char* str);
	~String();
	size_t getLength() const;
	char operator[] (size_t index) const;
	String& operator=(const String& s);
	bool operator==(const String& s);
	bool operator!=(const String& s);
	String copy() const;
	String operator+(const String& s);

	friend ostream& operator<<(ostream& out, const String& s);

};

String::String()
{
	length = 0;
	str = new char[1];
	str[0] = '\0';
}

String::String(const char* s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy(str, s);
}

String::~String()
{
	delete[]str;
}

size_t String::getLength() const
{
	return length;
}

char String::operator[](size_t index) const
{
	return str[index];
}

String& String::operator=(const String& s)
{
	if (this != &s)
	{
		delete[] str;
		length = s.length;
		str = new char[length + 1];
		strcpy(str,s.str);
	}
	return *this;
}

bool String::operator==(const String& s)
{
	return strcmp(str, s.str) == 0;
}

bool String::operator!=(const String& s)
{
	return strcmp(str, s.str) != 0;
}
//在 C++ 中，如果你没有显式定义拷贝构造函数，编译器会自动生成一个默认拷贝构造函数。  称为浅拷贝!
//编译器生成的默认拷贝构造函数会做以下事情：
//直接复制 length 的值（没问题）；
//直接复制 str 指针的值（即让新对象的 str 和原对象的 str 指向同一块内存）。
String String::copy() const
{
	String s = *this;  //这种 “在对象定义时用 = 赋值” 的语法，在 C++ 中被称为 “拷贝初始化”，它会触发 String 类的 拷贝构造函数（而非赋值运算符 operator=）。
	return s;
}

String String::operator+(const String& s)
{
	String result;
	result.length = length + s.length;
	result.str = new char[result.length + 1];
	strcpy(result.str, str);
	strcat(result.str, s.str);
	return result;
}

ostream& operator<<(ostream& out, const String& s)
{
	out << s.str;
	return out;
}


int main()
{
	String s("12345d");
	cout << s << endl;
	cout << s + "123" << endl;
	cout << s[5] << endl;
	cout << (s == "123") << endl;
	cout << (s != "123") << endl;
	s = "我喜欢你";
	cout << s << endl;
	String x = s.copy();  
	cout << x << endl;
	return 0;
}