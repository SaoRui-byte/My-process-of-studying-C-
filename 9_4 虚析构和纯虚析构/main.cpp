#include<iostream>
using namespace std;

class BaseA
{
public:
	BaseA() {

	}
	~BaseA() {
		cout << "BaseA 销毁了" << endl;
	}
};

class SonA :public BaseA
{
public:
	SonA():m_Value(NULL) {
		m_Value = new int(10);
	}
	int *m_Value;
	~SonA()
	{
		cout << "SonA 销毁了" << endl;
		delete m_Value;
	}
};

class BaseB
{
public:
	BaseB() {

	}
	//virtual ~BaseB() {
	//	cout << "BaseB 销毁了" << endl;
	//}
	virtual ~BaseB() = 0;
};
BaseB::~BaseB()
{
	cout << "BaseB 销毁了" << endl;
}

class SonB :public BaseB
{
public:
	SonB() :m_Value(NULL) {
		m_Value = new int(10);
	}
	int* m_Value;
	~SonB() //虚析构
	{
		cout << "SonB 销毁了" << endl;
		delete m_Value;
	}
};
int main()
{
	BaseA* a = new SonA();  //派生类对象可以被视为基类对象的一种特殊形式
	//派生类对象中包含完整的基类部分（称为 “基类子对象”），
	// 基类指针只会访问这部分与基类结构一致的内容，不会触及派生类新增的部分
	delete a;
	BaseB* b = new SonB();
	delete b;
	//BaseB x;  抽象类不能进行实例化
	return 0;
}

/*
总结
对 基本类型（如 int）：new int 不初始化（值随机），new int() 初始化为 0，括号影响极大。
对 类对象：括号的影响取决于是否有用户定义的构造函数 —— 有构造函数时，加不加括号都调用构造函数；无构造函数时，括号会强制初始化内置类型成员。
实际开发中，若需要基本类型的内存初始化为 0，建议用 new int()；若类有构造函数，new SonA 和 new SonA() 可随意选择（推荐不加括号，更简洁）。
*/

/*
纯虚析构必须定义：因为派生类析构会自动调用基类析构，若基类纯虚析构无定义，会导致链接错误。
抽象类指针合法：BaseB* b 只是声明指针（不是实例化对象），它可以指向具体派生类对象（如 SonB），是多态的核心机制。

*/

/*
当通过 父类指针删除派生类对象 时，由于静态绑定，只会调用父类析构，派生类析构被跳过（导致资源泄漏）。
当通过 派生类指针删除对象 时，仍会先调用派生类析构，再自动调用父类析构（无论父类析构是否为虚）。
*/

//新手记：非虚函数→静态绑定（编译时定），虚函数→动态绑定（运行时定）。

//一句话总结：虚函数是 “可重写的普通函数”，纯虚函数是 “必须重写的抽象接口”。