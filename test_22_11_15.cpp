#include <iostream>
#include <string>
using namespace std;

//�������Ϊ���Ա

//class Phone
//{
//public:
//
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone�Ĺ��캯������" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//
//	string m_PName;
//
//};
//
//class Person
//{
//public:
//	//Person m_Phone = pName; ��ʽת����
//	Person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//
//	string m_Name;
//	Phone m_Phone;
//};
//
////�������Ϊ������ԣ������ʱ���ȹ���������ԣ��ٹ����࣬������ʱ���෴�����ͷ��࣬���ͷŶ������ԡ�
//
//void test01()
//{
//	Person p("����", "ƻ��");
//
//	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << "�ֻ�" << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//��̬��Ա����

//class Person
//{
//public:
//	
//	static int m_A;
//private:
//	static int m_B;
//};
//
//int Person::m_A = 10;//��̬��Ա���������������������ʼ��(������ʹ�ó�ʼ���б��ʼ����̬��Ա����)
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
//	//��̬��Ա���� ������ĳ��������Ϊ���ж���ʹ��ͬһ�����ݣ���˾�̬���������ַ��ʷ�ʽ
//	//1. ͨ���������
//	/*Person p;
//	cout << p.m_A << endl;*/
//	//2. ͨ����������
//	cout << Person::m_A << endl;//Person�������µ�m_A
//}
//
//void test03()
//{
//	//cout << Person::m_B << endl;//��̬��Ա����Ҳ�з���Ȩ��
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

//��̬��Ա����

//class Person
//{
//public:
//	static void func()//��̬��Ա����Ҳ���з���Ȩ�޵�
//	{
//		m_A = 100;
//		//m_B = 200;��̬��Ա���������Է��ʷǾ�̬����,��Ϊ�ڵ���ʱ�������޷������Ƕ��ĸ�����ĳ�Ա�������в���
//		cout << "static void func�ĵ���" << endl;
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

//C++����ģ�ͺ�thisָ��

//class Person
//{
//
//	int m_A;//�Ǿ�̬��Ա����������Ķ�����
//	static int m_B;//��̬��Ա����������Ķ�����
//	void func(){}//�Ǿ�̬��Ա����������Ķ�����
//	static void func1(){}//��̬��Ա����������Ķ�����
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//
//	//�ն�����ռ�ڴ�ռ�Ϊ1�ֽڣ�Ϊ�������ڴ��еĿն��󣬼�ÿ����һ���ն���Ҳ����һ���ֽڿռ䣬��֤ÿ�������ж�һ�޶����ڴ�ռ�
//	//ÿ���ն���Ҳ�ж�һ�޶����ڴ��ַ
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
//		//thisָ��  �����õĳ�Ա����  �����Ķ���,����ָ��p����Ϊp��������˹��캯�����Լ����г�ʼ��
//		this->age = age;
//	}
//
//	Person& AddAge(Person& p)//���������ã����򷵻صľͲ���p2��ֻ��һ����������
//	//Person AddAge(Person& p)//����ֵ�����ϵ����˿������캯��������ֵ��p2һ��һ���Ķ�����������Ѿ�����p2����
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
//	cout << "p������Ϊ�� " << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.AddAge(p1).AddAge(p1).AddAge(p1);
//
//	cout << "p2������Ϊ�� " << p2.age << endl;
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

//��ָ�������ʳ�Ա��������ָ�����ֱ�ӷ������еĳ�Ա����

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
		}//��������Ľ�׳�ԣ�����this�Ƿ�Ϊ�ճ��򶼲���

		//����ԭ�򣺴����ָ��Ϊ��ָ�룬��û�д������󣬻�Ҫȥ�����˼ҵ����ԣ�����൱����������
		cout << "Age = " << this->m_Age << endl;//this->������Ĭ�ϵ����ݣ����Բ�д
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