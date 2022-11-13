#include <iostream>
#include <string>
using namespace std;

//对象的初始化和清理
//class Person
//{
//public:
//	//定义构造函数
//	Person()
//	{
//		cout << "Person 构造函数的调用" << endl;
//	}
//
//	//定义析构函数
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//
//
//};
//
//void test01()
//{
//	Person p;//
//}
//
//int main()
//{
//	test01();
//	//Person p;
//
//	//system("pause");
//
//	return 0;
//}

class Person
{
public:

	//无参构造（默认构造）
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	//有参构造
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造,拷贝构造以外的方式统称为普通构造
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person的拷贝函数调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

private:
	int age;
};

void test01()
{
	//括号法
	//Person p1;//调用默认构造函数,注意不要加小括号(),否则无法创建对象，会被编译器认为是一个函数的声明
	//Person p2(10);
	//Person p3(p2);
	//cout << p3.age << endl;

	//显示法
	//Person p1;
	//Person p2 = Person(10);
	//Person p3 = Person(p2);

	////不要利用拷贝构造初始化匿名对象
	//Person(p3);//编译器认为 : Person(p3)   ===   Person p3;  重定义,会报错

	//Person(10);//匿名对象:该行代码执行结束马上回收
	//system("pause");

	//隐式转换法
	Person p4 = 10;//等价于  Person p4 = Person(10)
	Person p5 = p4;///等价于  Person p5 = Person(p4)
}

int main()
{

	test01();

	return 0;
}
