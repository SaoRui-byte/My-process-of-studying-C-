#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char getK()
{
	char c;
	while (1)
	{
		c = getchar();
		if (c != ' ')
		{
			break;
		}
	}
	return c;
}      
//析构掉多余的空格函数



int main()
{
	char a, b;
	a = getchar();
	printf("%c", a);
	printf("%c",getK());


	return 0;
}