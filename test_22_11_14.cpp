#include <iostream>
#include <string>
using namespace std;

//�������캯��ʹ��ʱ��

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int a)
//	{
//		m_Age = a;
//		cout << "Person���вι��캯������" << endl;
//	}
//	/*Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�Ŀ������캯������" << endl;
//	}*/
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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
//	doWork(p1);//���ι���:Person p = Person(p1),����ı�p1��ֵ
//}
//
//Person test03()//����ֵ��ʵ��p1��һ�ݿ����������˿������캯��
//{
//	Person p1;
//	return p1;//����ֵ == Person(p1)
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

//�����ǳ����

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);//����ڶ����������ڴ棬�ͱ��������������н������ڴ��ͷţ���Ϊ�����ڴ�ֻ�ܳ���Ա�ͷ�
		cout << "Person�вι��캯������" << endl;
	}

	//�Լ�ʵ�ֿ����������������˼��
	Person(const Person& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  ������Ĭ��
		m_Height = new int(*p.m_Height);//���
	}

	~Person()
	{
		//���������ٵ������ͷŵ�
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person��������������" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(18, 160);

	cout << "P1������Ϊ��" << p1.m_Age << " P1�����Ϊ��" << *p1.m_Height << " p1�ĵ�ַΪ��" << p1.m_Height << endl;

	Person p2(p1);

	cout << "P2������Ϊ��" << p2.m_Age << " P2�����Ϊ��" << *p2.m_Height << " p2�ĵ�ַΪ��" << p2.m_Height << endl;
}

int main()
{

	test01();

	return 0;
}
