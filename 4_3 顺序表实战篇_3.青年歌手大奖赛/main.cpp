#include<iostream>
#include<stdexcept>
using namespace std; //以后用标准库的东西可以省略 std::，但前提是包含了对应的头文件（比如 <stdexcept>）
#define eleType double

struct SequentiaList
{
	eleType* elements;
	int size;
	int capacity;

};
//顺序表创建
void initializeList(SequentiaList* list, int capacity)
{
	list->elements = new eleType[capacity];
	list->size = 0;  //一开始是一个空的
	list->capacity = capacity;
}

//顺序表销毁
void destroyList(SequentiaList* list)
{
	delete[] list->elements;
}

//获取顺序表大小
int size(SequentiaList* list)
{
	return list->size;
}

//获取顺序表是否是空表
bool isEmpty(SequentiaList* list)
{
	return list->size == 0;
}

//顺序表插入操作
void insert(SequentiaList* list, int index, eleType element)
{
	if (index<0 || index>list->size)
	{
		throw std::invalid_argument("Invalid index");
	}
	if (list->size == list->capacity)  //扩容
	{
		int newCapacity = list->capacity * 2;
		eleType* newElements = new eleType[newCapacity];
		for (int i = 0; i < list->size; i++)
		{
			newElements[i] = list->elements[i];
		}
		delete[] list->elements;
		list->elements = newElements;
		list->capacity = newCapacity;
	}
	for (int i = list->size; i > index; i--)  //?
	{
		list->elements[i] = list->elements[i - 1];

	}
	list->elements[index] = element;
	list->size++;
}

//删除元素
void deleteElement(SequentiaList* list, int index)
{
	if (index < 0 || index >= list->size)  //可以等于，直接插入末尾
	{
		throw invalid_argument("Invalid index"); //加了头文件就可以不用std::了
	}
	for (int i = index; i < list->size - 1; i++)
	{
		list->elements[i] = list->elements[i + 1];
	}
	list->size--;
}

//查找
int findElement(SequentiaList* list, eleType element)
{
	for (int i = 0; i < list->size; i++)
	{
		if (list->elements[i] == element)
		{
			return i;
		}
	}
	return -1;
}

//元素索引
eleType getElement(SequentiaList* list, int index)
{
	if (index < 0 || index >= list->size)
	{
		throw std::invalid_argument("Invalid index");
	}
	return list->elements[index];
}

//元素修改
void updateElement(SequentiaList* list, int index, eleType value)
{
	if (index < 0 || index >= list->size)
	{
		throw std::invalid_argument("Invalid index");
	}
	list->elements[index] = value;
}


int main()
{
	int n;
	while (cin >> n)
	{
		SequentiaList s;
		initializeList(&s, 1);
		for (int i = 0; i < n; i++)
		{
			eleType ele;
			cin >> ele;
			insert(&s, i, ele);
		}
		eleType eMax = -1, eMin = 1000;
		eleType eSum = 0;
		for (int i = 0; i < s.size; i++)
		{
			eleType ele = getElement(&s, i);
			
			if (ele > eMax)
			{
				eMax = ele;
			}
			if (ele < eMin)
			{
				eMin = ele;
			}
			eSum += ele;
		}
		eSum = eSum - eMax - eMin;
		eSum /= (n-2);
		printf("%.2lf\n", eSum);


	}
	return 0;
}