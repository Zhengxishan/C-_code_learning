#include <iostream>
#include <string>
using namespace std;

//拷贝构造函数使用时机

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		m_Age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	/*Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}*/
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//
//private:
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//
//	
//}
//
//
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p1;
//	doWork(p1);//传参过程:Person p = Person(p1),不会改变p1的值
//}
//
//Person test03()//返回值其实是p1的一份拷贝，调用了拷贝构造函数
//{
//	Person p1;
//	return p1;//返回值 == Person(p1)
//}
//
//int main()
//{
//
//	test01();
//	//test02();
//	//test03();
//
//	return 0;
//}

//深拷贝和浅拷贝

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);//如果在堆区创建了内存，就必须在析构函数中将堆区内存释放，因为堆区内存只能程序员释放
		cout << "Person有参构造函数调用" << endl;
	}

	//自己实现拷贝函数，采用深拷贝思想
	Person(const Person& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  编译器默认
		m_Height = new int(*p.m_Height);//深拷贝
	}

	~Person()
	{
		//将堆区开辟的数据释放掉
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(18, 160);

	cout << "P1的年龄为：" << p1.m_Age << " P1的身高为：" << *p1.m_Height << " p1的地址为：" << p1.m_Height << endl;

	Person p2(p1);

	cout << "P2的年龄为：" << p2.m_Age << " P2的身高为：" << *p2.m_Height << " p2的地址为：" << p2.m_Height << endl;
}

int main()
{

	test01();

	return 0;
}
