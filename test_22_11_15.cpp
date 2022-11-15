#include <iostream>
#include <string>
using namespace std;

//类对象作为类成员

//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone的构造函数调用" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//
//	string m_PName;
//
//};
//
//class Person
//{
//public:
//	//Person m_Phone = pName; 隐式转换法
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//
//	string m_Name;
//	Phone m_Phone;
//};
//
////类对象作为类的属性，构造的时候先构造对象属性，再构造类，析构的时候相反，先释放类，再释放对象属性。
//
//void test01()
//{
//	Person p("张三", "苹果");
//
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << "手机" << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//静态成员变量

//class Person
//{
//public:
//	
//	static int m_A;
//private:
//	static int m_B;
//};
//
//int Person::m_A = 10;//静态成员变量，类内声明，类外初始化(不可以使用初始化列表初始化静态成员变量)
//int Person::m_B = 20;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//	Person p1;
//	cout << p1.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//	cout << p1.m_A << endl;
//}
//
//
//void test02()
//{
//	//静态成员变量 不属于某个对象，因为所有对象使用同一份数据，因此静态变量有两种访问方式
//	//1. 通过对象访问
//	/*Person p;
//	cout << p.m_A << endl;*/
//	//2. 通过类名访问
//	cout << Person::m_A << endl;//Person作用域下的m_A
//}
//
//void test03()
//{
//	//cout << Person::m_B << endl;//静态成员变量也有访问权限
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	return 0;
//}

//静态成员函数

//class Person
//{
//public:
//	static void func()//静态成员函数也是有访问权限的
//	{
//		m_A = 100;
//		//m_B = 200;静态成员函数不可以访问非静态变量,因为在调用时函数体无法区分是对哪个对象的成员变量进行操作
//		cout << "static void func的调用" << endl;
//	}
//
//	static int m_A;
//	int m_B;
//};
//
//int Person::m_A = 10;
//
//void test01()
//{
//	Person p;
//	p.func();
//
//	Person::func();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//C++对象模型和this指针

//class Person
//{
//
//	int m_A;//非静态成员变量属于类的对象上
//	static int m_B;//静态成员变量不在类的对象上
//	void func(){}//非静态成员函数不在类的对象上
//	static void func1(){}//静态成员函数不在类的对象上
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//
//	//空对象所占内存空间为1字节，为了区分内存中的空对象，即每创建一个空对象也给他一个字节空间，保证每个对象都有独一无二的内存空间
//	//每个空对象也有独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	return 0;
//}

//class Person
//{
//
//public:
//
//	Person(int age)
//	{
//		//this指向  被调用的成员函数  所属的对象,这里指向p，因为p对象调用了构造函数对自己进行初始化
//		this->age = age;
//	}
//
//	Person& AddAge(Person& p)//必须以引用，否则返回的就不是p2而只是一个匿名对象
//	//Person AddAge(Person& p)//返回值本质上调用了拷贝构造函数复制了值和p2一摸一样的对象出来，但已经不是p2本体
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//
//};
//
//void test01()
//{
//	Person p(18);
//
//	cout << "p的年龄为： " << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想
//	p2.AddAge(p1).AddAge(p1).AddAge(p1);
//
//	cout << "p2的年龄为： " << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//
//	return 0;
//}

//空指针来访问成员函数：空指针可以直接访问所有的成员函数

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		if (this == NULL)
		{
			return;
		}//提升代码的健壮性，不管this是否为空程序都不崩

		//报错原因：传入的指针为空指针，并没有创建对象，还要去访问人家的属性，因此相当于无中生有
		cout << "Age = " << this->m_Age << endl;//this->编译器默认的内容，可以不写
	}

    int m_Age;
};


void test01()
{
	Person* p = NULL;

	//p->showClassName();
	p->showPersonAge();
}

int main()
{
	test01();

	return 0;
}