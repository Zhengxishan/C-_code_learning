#include <iostream>
#include <string>
using namespace std;

//�������ʹ�������

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//
//	//�������ʹ�������Ϊ�����̬���������������޷����õ�����
//
//	//������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal������������" << endl;
//	//}
//
//	//��������  ��Ҫ������Ҳ��Ҫʵ��
//	//Ҳ���ڳ����࣬�޷�ʵ��������
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
//	cout << "Animal�Ĵ�����������" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//
//	~Cat()
//	{
//		//�����Դ��룬ȷ�����������ͷ�
//		if (m_Name != NULL)
//		{
//			cout << "Cat������������" << endl;
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

//������װ����

//���������

//CPU������
class CPU
{
public:
	virtual void calculate() = 0;
};

//�Կ�������
class VideoCard
{
public:
	virtual void display() = 0;
};

//�ڴ���������
class Memory
{
public:
	virtual void storage() = 0;
};

//����ṩ���̳�����

//Intel

//CPU
class IntelCPU : public CPU
{
public:
	void calculate()
	{
		cout << "Inte CPU��ʼ������" << endl;
	}
};

//�Կ�
class IntelVideoCard : public VideoCard
{
public:
	void display()
	{
		cout << "Intel�Կ���ʼ��ʾ����" << endl;
	}
};

//�ڴ�
class IntelMemory : public Memory
{
public:
	void storage()
	{
		cout << "Intel�ڴ�����ʼ�洢��" << endl;
	}
};

//Lenovo

//CPU
class LenovoCPU : public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo CPU��ʼ������" << endl;
	}
};
//�Կ�
class LenovoVideoCard : public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo�Կ���ʼ��ʾ��" << endl;
	}
};
//�ڴ�
class LenovoMemory : public Memory
{
public:
	void storage()
	{
		cout << "Lenovo�ڴ�����ʼ�洢��" << endl;
	}
};

//������
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

	//������������
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
