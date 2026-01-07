#include<iostream>
#include<stdexcept>
using namespace std; //以后用标准库的东西可以省略 std::，但前提是包含了对应的头文件（比如 <stdexcept>）
#define eleType int

struct SequentiaList
{
	eleType* elements;
	int size;
	int capacity;

};
//顺序表创建
void initializeList(SequentiaList* list,int capacity)
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
void deleteElement(SequentiaList*list,int index)
{
	if (index<0 || index>=list->size)  //可以等于，直接插入末尾
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
	SequentiaList myList;
	initializeList(&myList, 10);
	for (int i = 0; i < 10; i++)
	{
		insert(&myList, i, i * 10);
	}
	cout << "size:" << size(&myList) << endl;;
	cout << "Is empty:" << isEmpty(&myList) << endl;
	for (int i = 0; i < size(&myList); i++)
	{
		cout << getElement(&myList, i) << ' ';
	}
	cout << endl;
	deleteElement(&myList, 12);
	updateElement(&myList, 1, 1314);
	for (int i = 0; i < size(&myList); i++)
	{
		cout << getElement(&myList, i) << ' ';
	}
	cout << endl;
	int idx = findElement(&myList, 20);
	cout << idx << endl;
	destroyList(&myList);

	return 0;
}