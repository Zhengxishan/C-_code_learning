#include <iostream>
#include <string>
using namespace std;

//递增运算符重载(成员函数重载)
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& m);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	MyInteger& operator++()//必须以引用方式返回，因为内置++运算符返回的还是原变量，这里保持和内置运算符一致
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//int是一个占位参数，可用于区分前置递增和后置递增,加int后编译器认为是后置递增
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//};
//
////左移运算符重载(只能采用全局函数重载)
//ostream& operator<<(ostream& out, MyInteger& m)
//{
//	out << m.m_Num;
//	return out;
//}
//
//
//
//void test01()
//{
//	MyInteger myint;
//
//
//	cout << ++(++myint) << endl;//2
//	cout << myint << endl;//和内置运算符一致//2
//
//	cout << myint++ << endl;//2
//	cout << myint << endl;//3
//
//}
//
//int main()
//{
//	test01();
//
//	//ostream& out = cout;
//	//out << 1 << endl;
//
//	
//	return 0;
//}

//递减运算符重载(全局函数重载)

class MyInteger
{
	friend MyInteger& operator--(MyInteger& myint);
	friend ostream& operator<<(ostream& out, MyInteger& m);
	friend MyInteger operator--(MyInteger& myint, int);

public:
	MyInteger()
	{
		m_Num = 10;
	}

private:
	int m_Num;
};


//左移运算符重载(只能采用全局函数重载)
ostream& operator<<(ostream& out, MyInteger& m)
{
	out << m.m_Num;
	return out;
}

MyInteger& operator--(MyInteger& myint)
{
	myint.m_Num--;
	return myint;
}

MyInteger operator--(MyInteger& myint, int)
{
	MyInteger temp = myint;
	myint.m_Num--;
	return temp;
}

void test()
{
	MyInteger myint;

	cout << --myint << endl;
	cout << myint << endl;

	/*cout << myint-- << endl;
	cout << myint << endl;*/

}

int main()
{
	test();

	return 0;
}




