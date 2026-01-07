#include<iostream>
#include<stdexcept>
using namespace std;

#define eleType int   //ºê¶¨ÒåÎÞ ; !

struct ListNode
{
	eleType data;
	ListNode* next;

	ListNode(eleType x) :data(x), next(NULL)
	{

	}
};

class LinkedList
{
private:
	ListNode* head;
	int size;
public:
	LinkedList() :head(NULL), size(0)
	{

	}
	~LinkedList();
	void insert(int i, eleType value);
	void remove(int i);
	ListNode* find(eleType value);
	ListNode* get(int i);
	void update(int i, eleType value);
	void print();
	eleType sum();
};

LinkedList::~LinkedList()
{
	ListNode* curr = head;
	while (curr != NULL)
	{
		ListNode* tmp = curr;
		curr = curr->next;
		delete tmp;
	}
}

void LinkedList::insert(int i, eleType value)
{
	if (i<0 || i>size)
	{
		throw out_of_range("Invalid position");
	}
	ListNode* newNode = new ListNode(value);
	if (i == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		ListNode* curr = head;
		for (int j = 0; j < i - 1; j++)
		{
			curr = curr->next;

		}
		newNode->next = curr->next;
		curr->next = newNode;

	}
	size++;
}

void LinkedList::remove(int i)
{
	if (i < 0 || i >= size)
	{
		throw out_of_range("Invalid position");
	}
	if (i == 0)
	{
		ListNode* tmp = head;
		head = head->next;
		delete tmp;
	}
	else
	{
		ListNode* curr = head;
		for (int j = 0; j < i - 1; j++)
		{
			curr = curr->next;
		}
		ListNode* temp = curr->next;
		curr->next = temp->next;
		delete temp;
	}
	size--;
}

ListNode* LinkedList::find(eleType value)
{
	ListNode* curr = head;
	while (curr && curr->data != value)
	{
		curr = curr->next;
	}
	return curr;
}

ListNode* LinkedList::get(int i)
{
	if (i < 0 || i >= size)
	{
		throw out_of_range("Invalid position");
	}
	ListNode* curr = head;
	for (int j = 0; j < i; j++)
	{
		curr = curr->next;
	}
	return curr;
}

void LinkedList::update(int i, eleType value)
{
	get(i)->data = value;
}

void LinkedList::print()
{
	ListNode* curr = head;
	while (curr)
	{
		cout << curr->data << ' ';
		curr = curr->next;
	}
	cout << endl;
}

eleType LinkedList::sum()
{
	ListNode* curr = head;
	eleType ret = 0;
	while (curr != NULL)
	{
		ret += curr->data;
		curr = curr->next;
	}
	return ret;
}

int main()
{
	int n;
	while (cin >> n&&n)
	{
		LinkedList l;
		for (int i = 0; i < n; i++)
		{
			eleType x;
			cin >> x;
			l.insert(i, x);
		}
		cout << l.sum() << endl;
	}
	return 0;
}