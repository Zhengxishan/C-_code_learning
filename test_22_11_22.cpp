#include <iostream>
#include <string>
using namespace std;

//���ع�ϵ�����
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
//	//	cout << "p1��p2���" << endl;
//	//}
//	//else
//	//{
//	//	cout << "p1��p2�����" << endl;
//	//}
//
//	if (p1 != p2)
//	{
//		cout << "p1��p2�����" << endl;
//	}
//	else
//	{
//		cout << "p1��p2���" << endl;
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

//�����������������
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
//	//myPrint("hello world");//ʹ�÷ǳ����ƺ������ã���˱���Ϊ�º���
//	//MyPrint02("hello world");
//
//	Add add;
//	cout << add(1, 2) << endl;
//
//	//������������  Add()��һ����������
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

//�̳�

//Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};

//Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��

//����ҳ����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//};
//
////Javaҳ��
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class Cpp : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//
//void test01()
//{
//	cout << "Java������Ƶҳ������: " << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//
//	cout << "----------------------------" << endl;
//
//	cout << "Python������Ƶҳ������: " << endl;
//	Python python;
//	python.header();
//	python.footer();
//	python.left();
//	python.content();
//
//	cout << "----------------------------" << endl;
//
//	cout << "C++������Ƶҳ������: " << endl;
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

//�̳з�ʽ

//�̳��еĶ���ģ��

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

//ʹ�� ������Ա������ʾ���� �鿴��Ĳ���
//cd Դ�ļ�·��
//cl /d1 reportSingleClassLayoutSon �ļ���

//�̳��й����������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯������" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base������������" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son���캯������" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son������������" << endl;
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

//����������ͬ���Ĵ���
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
//		cout << "Base - func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
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
//		cout << "Son - func()����" << endl;
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
//	//�������г��ֺ͸���ͬ���ĳ�Ա�����������еĳ�Ա�����Ὣ���������е�ͬ���������أ�Ҫ����ñ���ָ��������
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

//ͬ����̬��Ա����
void test01()
{
	Son s;
	cout << "Son�µ�m_A " << s.m_A << endl;
	cout << "Base�µ�m_A " << s.Base::m_A << endl;

	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;
}

//ͬ����̬��Ա����
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
