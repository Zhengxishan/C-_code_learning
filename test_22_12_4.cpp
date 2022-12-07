#include <iostream>
#include <string>
using namespace std;

//虚析构和纯虚析构

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//
//	//虚析构和纯虚析构为解决多态下子类析构函数无法调用的问题
//
//	//虚析构
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal析构函数调用" << endl;
//	//}
//
//	//纯虚析构  需要声明，也需要实现
//	//也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//
//
//
//	virtual void speak() = 0;
//
//	string* m_Name;
//};
//
//Animal:: ~Animal()
//{
//	cout << "Animal的纯虚析构函数" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//
//	~Cat()
//	{
//		//保护性代码，确保堆区数据释放
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//
//void test01()
//{
//	Animal* a = new Cat("Tom");
//	a->speak();
//	delete a;
//}
//
//int main()
//{
//	test01();
//
//	
//
//	return 0;
//}

//电脑组装案例

//零件抽象类

//CPU抽象类
class CPU
{
public:
	virtual void calculate() = 0;
};

//显卡抽象类
class VideoCard
{
public:
	virtual void display() = 0;
};

//内存条抽象类
class Memory
{
public:
	virtual void storage() = 0;
};

//零件提供厂商抽象类

//Intel

//CPU
class IntelCPU : public CPU
{
public:
	void calculate()
	{
		cout << "Inte CPU开始计算了" << endl;
	}
};

//显卡
class IntelVideoCard : public VideoCard
{
public:
	void display()
	{
		cout << "Intel显卡开始显示画面" << endl;
	}
};

//内存
class IntelMemory : public Memory
{
public:
	void storage()
	{
		cout << "Intel内存条开始存储了" << endl;
	}
};

//Lenovo

//CPU
class LenovoCPU : public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo CPU开始计算了" << endl;
	}
};
//显卡
class LenovoVideoCard : public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo显卡开始显示了" << endl;
	}
};
//内存
class LenovoMemory : public Memory
{
public:
	void storage()
	{
		cout << "Lenovo内存条开始存储了" << endl;
	}
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu,VideoCard* videoCard,Memory* memory)
	{
		m_Cpu = cpu;
		m_VideoCard = videoCard;
		m_Memory = memory;
	}

	void doWork()
	{
		m_Cpu->calculate();
		m_VideoCard->display();
		m_Memory->storage();
	}

	//创建析构函数
	~Computer()
	{
		if (m_Cpu != NULL)
		{
			delete m_Cpu;
			m_Cpu = NULL;
		}

		if (m_VideoCard != NULL)
		{
			delete m_VideoCard;
			m_VideoCard = NULL;
		}

		if (m_Memory != NULL)
		{
			delete m_Memory;
			m_Memory = NULL;
		}
	}


private:
	CPU* m_Cpu;
	VideoCard* m_VideoCard;
	Memory* m_Memory;
};

void test01()
{
	Computer* c1 = new Computer(new IntelCPU,new IntelVideoCard,new IntelMemory);
	Computer* c2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	Computer* c3 = new Computer(new IntelCPU, new LenovoVideoCard, new LenovoMemory);

	c1->doWork();
	cout << "-----------------------" << endl;
	c2->doWork();
	cout << "-----------------------" << endl;
	c3->doWork();

	delete c1;
	delete c2;
	delete c3;
}

int main()
{
	test01();

	return 0;
}
