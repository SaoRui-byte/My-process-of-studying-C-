#include<iostream>
using namespace std;

template<typename KeyType,typename ValueType>
class HashNode
{
public:
	KeyType key;
	ValueType value;
	HashNode* next;
	
	HashNode(const KeyType& key, const ValueType& value)
	{
		this->key = key;
		this->value = value;
		this->next = NULL;
	}
};

template<typename KeyType, typename ValueType>
class HashTable
{
private:
	int size;
	HashNode<KeyType, ValueType>** table;

	int hash(const KeyType& key) const
	{
		int hashKey = key % size;
		if (hashKey < 0)
		{
			hashKey += size;
		}
		return hashKey;
	}

public:
	HashTable(int size = 256);
	~HashTable();
	void insert(const KeyType& key, const ValueType& value);
	void remove(const KeyType& key);
	bool find(const KeyType& key, ValueType& value) const;
};

template<typename KeyType, typename ValueType>
HashTable<KeyType,ValueType>::HashTable(int size) //要在外面把256去掉，因为类里面已经有了,函数定义处不能重复写默认参数
{
	this->size = size;
	this->table = new HashNode<KeyType, ValueType>* [size];
	for (int i = 0; i < size; i++)
	{
		this->table[i] = NULL;
	}
}

template<typename KeyType, typename ValueType>
HashTable<KeyType, ValueType>::~HashTable()
{
	for (int i = 0; i < size; i++)
	{
		if (table[i])
		{
			HashNode<KeyType, ValueType>* curr = table[i];
			while (curr)
			{
				HashNode<KeyType, ValueType>* next = curr->next;
				delete curr;
				curr = next;
			}
			table[i] = NULL;
		}
	}
	delete table;
	table = NULL;
}

template<typename KeyType, typename ValueType>
void HashTable<KeyType, ValueType>::insert(const KeyType& key, const ValueType& value)
{
	int index = hash(key);
	HashNode<KeyType, ValueType>* now = new HashNode<KeyType, ValueType>(key, value);
	if (table[index] == NULL)
	{
		table[index] = now;
	}
	else
	{
		now->next = table[index];
		table[index] = now;
	}

}

template<typename KeyType, typename ValueType>
void HashTable<KeyType, ValueType>::remove(const KeyType& key)
{
	int index = hash(key);
	if (table[index]->key == key)
	{
		HashNode<KeyType, ValueType>* next = table[index]->next;
		delete table[index];
		table[index] = next;
	}
	else
	{
		HashNode<KeyType, ValueType>* curr = table[index];
		while (table[index]->next && curr->next->key != key)
		{
			curr = curr->next;
		}
		HashNode<KeyType, ValueType>* next = curr->next->next;
		delete curr->next;
		curr->next = next;

	}

}

template<typename KeyType, typename ValueType>
bool HashTable<KeyType, ValueType>::find(const KeyType& key, ValueType& value) const
{
	int index = hash(key);
	if (table[index])
	{
		if (table[index]->key == key)
		{
			value = table[index]->value;
			return true;
		}
		else
		{
			HashNode<KeyType, ValueType>* curr;
			curr = table[index];
			while (curr->next && curr->next->key != key)
			{
				curr = curr->next;
			}
			value = curr->next->value;
			return true;
		}
	}
	return false;
}



int main()
{
	HashTable<int, char>  h(1000);
	h.insert(1, 'a');
	h.insert(2, 'b');
	h.insert(3, 'c');
	h.insert(41012012, 'd');
	
	char val;
	if (!h.find(43, val))
	{
		cout << "43 not found!" << endl;
	}

	if (h.find(41012012, val))
	{
		cout << val << endl;
	}

	return 0;
}