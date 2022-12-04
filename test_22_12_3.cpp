#include <iostream>
#include <string>
using namespace std;


//������Ʒ
//class AbstactDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//�Ÿ���
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
//	void MakeDrinking()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee : public AbstactDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//�Ÿ���
//	virtual void PutSomething()
//	{
//		cout << "����ţ�̺���" << endl;
//	}
//};
//
//class Tea : public AbstactDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//�Ÿ���
//	virtual void PutSomething()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//void test01()
//{
//	AbstactDrinking* abk = new Coffee;
//	abk->MakeDrinking();
//	delete abk;
//	cout << "----------------" << endl;
//	abk = new Tea;
//	abk->MakeDrinking();
//	delete abk;
//}
//
////��������
//void doWork(AbstactDrinking& abk)
//{
//	abk.MakeDrinking();
//}
//
//void test02()
//{
//	Coffee c;
//	doWork(c);
//	cout << "----------------" << endl;
//	Tea t;
//	doWork(t);
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}

//class Test
//{
//public:
//	Test()
//	{
//		cout << "���캯������" << endl;
//	}
//};
//
//int main()
//{
//	Test* t;//�����ָ�뱾����Ҳ��һ��ָ����ѣ����������������Ĺ��캯��
//
//	return 0;
//}

//�������ʹ�������


class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}

	~Animal()
	{
		cout << "Animal������������" << endl;
	}
	
	virtual void speak() = 0;

	string* m_Name;
};

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void test01()
{
	Animal* a = new Cat("Tom");
	a->speak();
	delete a;
}

int main()
{
	test01();

	return 0;
}