#include <iostream>
#include <string>
using namespace std;

//����ĳ�ʼ��������
//class Person
//{
//public:
//	//���幹�캯��
//	Person()
//	{
//		cout << "Person ���캯���ĵ���" << endl;
//	}
//
//	//������������
//	~Person()
//	{
//		cout << "Person ���������ĵ���" << endl;
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

	//�޲ι��죨Ĭ�Ϲ��죩
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	//�вι���
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//��������,������������ķ�ʽͳ��Ϊ��ͨ����
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person�Ŀ�����������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

private:
	int age;
};

void test01()
{
	//���ŷ�
	//Person p1;//����Ĭ�Ϲ��캯��,ע�ⲻҪ��С����(),�����޷��������󣬻ᱻ��������Ϊ��һ������������
	//Person p2(10);
	//Person p3(p2);
	//cout << p3.age << endl;

	//��ʾ��
	//Person p1;
	//Person p2 = Person(10);
	//Person p3 = Person(p2);

	////��Ҫ���ÿ��������ʼ����������
	//Person(p3);//��������Ϊ : Person(p3)   ===   Person p3;  �ض���,�ᱨ��

	//Person(10);//��������:���д���ִ�н������ϻ���
	//system("pause");

	//��ʽת����
	Person p4 = 10;//�ȼ���  Person p4 = Person(10)
	Person p5 = p4;///�ȼ���  Person p5 = Person(p4)
}

int main()
{

	test01();

	return 0;
}
