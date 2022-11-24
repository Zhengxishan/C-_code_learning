#include <iostream>
#include <string>
using namespace std;

//多继承语法
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
//class Son : public Base1, public Base2//多继承
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

//菱形继承问题

////动物类
//class Animal
//{
//public:
//	int m_Age;
//};
//
////虚继承用于解决菱形继承的问题
////羊类
//class Sheep : virtual public Animal
//{
//
//};
//
////驼类
//class Tuo : virtual public Animal
//{
//
//};
//
////羊驼类
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
//	cout << "s.m_Age = " << s.m_Age << endl;//虚继承后数据只有一份
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//多态
//class Animal
//{ 
//public:
//	//虚函数
//	void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
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
//	doSpeak(cat);//子类的对象也可以看成父类对象
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

//计算器实现

//普通写法
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

//多态写法
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

//加法计算器类
class AddCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//剑法计算器类
class SubCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法计算器类
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
	
	delete abc;//释放的是数据，指针本身没变

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