#include <iostream>
#include <string>
using namespace std;

//��̳��﷨
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
//class Son : public Base1, public Base2//��̳�
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "sizeof son = " << sizeof(Son) << endl;
//
//	cout << s.Base1::m_A << endl;
//	cout << s.Base2::m_A << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//���μ̳�����

////������
//class Animal
//{
//public:
//	int m_Age;
//};
//
////��̳����ڽ�����μ̳е�����
////����
//class Sheep : virtual public Animal
//{
//
//};
//
////����
//class Tuo : virtual public Animal
//{
//
//};
//
////������
//class SheepTuo : public Sheep, public Tuo
//{
//
//};
//
//void test01()
//{
//	SheepTuo s;
//	s.Sheep::m_Age = 18;
//	s.Tuo::m_Age = 28;
//	
//	cout << "s.Sheep::m_Age = " << s.Sheep::m_Age << endl;
//	cout << "s.Tuo::m_Age = " << s.Tuo::m_Age << endl;
//	cout << "s.m_Age = " << s.m_Age << endl;//��̳к�����ֻ��һ��
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//��̬
//class Animal
//{ 
//public:
//	//�麯��
//	void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//
//};
//
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);//����Ķ���Ҳ���Կ��ɸ������
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof Animal = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//
//	test01();
//
//	//test02();
//
//
//	return 0;
//}

//������ʵ��

//��ͨд��
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}

	int m_Num1;
	int m_Num2;
};

//��̬д��
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//������������
class SubCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷���������
class MulCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << "10 + 10 = " << abc->getResult() << endl;
	
	delete abc;//�ͷŵ������ݣ�ָ�뱾��û��

	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << "10 - 10 = " << abc->getResult() << endl;
	delete abc;

	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << "10 * 10 = " << abc->getResult() << endl;

	delete abc;
	
}

void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}


int main()
{
	//test01();
	test02();

	return 0;
}