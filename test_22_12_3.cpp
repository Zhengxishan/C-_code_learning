#include <iostream>
#include <string>
using namespace std;


//制作饮品
//class AbstactDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//放辅料
//	virtual void PutSomething() = 0;
//
//	//制作饮品
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
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//放辅料
//	virtual void PutSomething()
//	{
//		cout << "放入牛奶和糖" << endl;
//	}
//};
//
//class Tea : public AbstactDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//放辅料
//	virtual void PutSomething()
//	{
//		cout << "放入柠檬" << endl;
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
////制作函数
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
//		cout << "构造函数调用" << endl;
//	}
//};
//
//int main()
//{
//	Test* t;//类对象指针本质上也是一个指针而已，创建它不会调用类的构造函数
//
//	return 0;
//}

//虚析构和纯虚析构


class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}

	~Animal()
	{
		cout << "Animal析构函数调用" << endl;
	}
	
	virtual void speak() = 0;

	string* m_Name;
};

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
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