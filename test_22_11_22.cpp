#include <iostream>
#include <string>
using namespace std;

//重载关系运算符
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//			return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//private:
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Jack", 18);
//
//	//if (p1 == p2)
//	//{
//	//	cout << "p1与p2相等" << endl;
//	//}
//	//else
//	//{
//	//	cout << "p1与p2不相等" << endl;
//	//}
//
//	if (p1 != p2)
//	{
//		cout << "p1与p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1与p2相等" << endl;
//	}
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//函数调用运算符重载
//class MyPrint
//{
//public:
//
//	void operator()(string text)
//	{
//		cout << text << endl;
//	}
//
//};
//
//void MyPrint02(string text)
//{
//	cout << text << endl;
//}
//
//class Add
//{
//public:
//
//	int operator()(int num1,int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test01()
//{
//	//MyPrint myPrint;
//	//myPrint("hello world");//使用非常类似函数调用，因此被称为仿函数
//	//MyPrint02("hello world");
//
//	Add add;
//	cout << add(1, 2) << endl;
//
//	//匿名函数对象  Add()是一个匿名对象
//	cout << Add()(1, 2) << endl;
//
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//继承

//Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};

//Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};

//继承实现页面

//公共页面类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//};
//
////Java页面
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class Cpp : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//
//void test01()
//{
//	cout << "Java下载视频页面如下: " << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//
//	cout << "----------------------------" << endl;
//
//	cout << "Python下载视频页面如下: " << endl;
//	Python python;
//	python.header();
//	python.footer();
//	python.left();
//	python.content();
//
//	cout << "----------------------------" << endl;
//
//	cout << "C++下载视频页面如下: " << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//继承方式

//继承中的对象模型

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//	int m_D;
//};
//
//
//void test01()
//{
//	
//	cout << "sizeof(Son) = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//
//	test01();
//
//	return 0;
//}

//使用 开发人员命令提示工具 查看类的布局
//cd 源文件路径
//cl /d1 reportSingleClassLayoutSon 文件名

//继承中构造和析构的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数调用" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base析构函数调用" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数调用" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son析构函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	Son s;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//父类与子类同名的处理
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//
//	int m_A;
//
//};
//
//void test01()
//{
//	Son s;
//
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//}
//
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//当子类中出现和父类同名的成员函数，子类中的成员函数会将父类中所有的同名函数隐藏，要想调用必须指定作用域
//	s.Base::func(10);
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

class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
};

int Base::m_A = 100;

class Son : public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};

int Son::m_A = 200;

//同名静态成员变量
void test01()
{
	Son s;
	cout << "Son下的m_A " << s.m_A << endl;
	cout << "Base下的m_A " << s.Base::m_A << endl;

	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;
}

//同名静态成员函数
void test02()
{
	Son s;
	s.func();
	s.Base::func();

	Son::func();
	Son::Base::func();
}

int main()
{

	//test01();
	test02();

	return 0;
}
