#include <iostream>
#include <string>
using namespace std;

//�������������(��Ա��������)
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& m);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	MyInteger& operator++()//���������÷�ʽ���أ���Ϊ����++��������صĻ���ԭ���������ﱣ�ֺ����������һ��
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//int��һ��ռλ����������������ǰ�õ����ͺ��õ���,��int���������Ϊ�Ǻ��õ���
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
////�������������(ֻ�ܲ���ȫ�ֺ�������)
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
//	cout << myint << endl;//�����������һ��//2
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

//�ݼ����������(ȫ�ֺ�������)

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


//�������������(ֻ�ܲ���ȫ�ֺ�������)
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




