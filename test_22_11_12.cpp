#include <iostream>
#include <string>
using namespace std;

//����Ȩ��

//public protected private

//class Person
//{
//public:
//	string pNmae;
//protected:
//	string pCar;
//private:
//	int pPassword;
//
//public:
//	void func()
//	{
//		pNmae = "����";
//		pCar = "������";
//		pPassword = 123456;
//	}
//};
//
//int main()
//{
//	Person p1;
//
//	p1.pNmae = "����";
//
//	//����˵������Ȩ�޺�˽��Ȩ�����ⲻ���Է���
//	//p1.pCar = "����";
//	//p1.pPassword = 123;
//
//	p1.func();
//
//
//	return 0;
//}

//c++��struct��class Ψһ���� ����Ĭ�Ϸ���Ȩ�޲�ͬ��ǰ��Ĭ�Ϲ���������Ĭ��˽��
//struct C
//{
//	int m;
//
//	void func()
//	{
//		cout << m << endl;
//	}
//};
//
//int main()
//{
//	C c1;
//	c1.m = 1;
//	c1.func();
//
//
//	return 0;
//}

//��Ա����˽�л�

//class Person
//{
//public:
//
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//��ȡ����  �ɶ���д��д�Ļ�������0-150��
//	int getAge()
//	{
//		return m_Age;
//	}
//	//��������
//	void setAge(int age)
//	{
//		if (age<0 || age>150)
//		{
//			m_Age = 0;
//			cout << "�����������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//��������
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//����  �ɶ���д
//	string m_Name;
//
//	//����   ֻ��
//	int m_Age;
//
//	//����  ֻд
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//
//	cout << "����Ϊ�� " << p.getName() << endl;
//
//	p.setAge(18);
//	//p.setAge(167);
//	cout << "����Ϊ�� " << p.getAge() << endl;
//
//	p.setLover("С��");
//
//	return 0;
//}

//��������
//class Cube
//{
//public:
//	double getLength()
//	{
//		return m_L;
//	}
//
//	double getWidth()
//	{
//		return m_W;
//	}
//
//	double getHeight()
//	{
//		return m_H;
//	}
//
//	void setLength(double length)
//	{
//		if (length <= 0)
//		{
//			cout << "�����������������" << endl;
//			return;
//		}
//		m_L = length;
//	}
//
//	void setWidth(double width)
//	{
//		if (width <= 0)
//		{
//			cout << "�����������������" << endl;
//			return;
//		}
//		m_W = width;
//	}
//
//	void setHeight(double height)
//	{
//		if (height <= 0)
//		{
//			cout << "�����������������" << endl;
//			return;
//		}
//		m_H = height;
//	}
//
//	double calcArea()
//	{
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//
//	double calcVolume()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//��Ա�����ж�
//	bool isEqual(Cube& c)
//	{
//		if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHeight())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	double m_L;
//	double m_W;
//	double m_H;
//};
//
////��д��
//int isEqual(Cube*  c1, Cube* c2)//Ҳ���Է���bool
//{
//	if (c1->getLength() == c2->getLength() && c1->getWidth() == c2->getWidth() && c1->getHeight() == c2->getHeight())
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
////��ʦ��д
//bool isEqual(Cube& c1, Cube& c2)//ʹ�����ô��β���Ҫ����ָ�������,�﷨���
//{
//	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//int main()
//{
//	Cube c1;
//	Cube c2;
//
//	c1.setLength(10);
//	c1.setWidth(10);
//	c1.setHeight(10);
//
//	cout << "c1�ı����Ϊ��" << c1.calcArea() << "  c1�����Ϊ��" << c1.calcVolume() << endl;
//
//	c2.setLength(10);
//	c2.setWidth(10);
//	c2.setHeight(10);
//
//	cout << "c2�ı����Ϊ��" << c2.calcArea() << "  c2�����Ϊ��" << c2.calcVolume() << endl;
//
//	//ȫ�ֺ����ж��Ƿ����
//	
//	//if (isEqual(&c1, &c2) == 0)
//	if (isEqual(c1,c2) == true)
//	{
//		cout << "c1��c2���" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�����" << endl;
//	}
//
//	//��Ա�����ж�
//	if (c1.isEqual(c2) == true)
//	{
//		cout << "c1��c2���" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�����" << endl;
//	}
//
//
//	return 0;
//}

//���Բ�Ĺ�ϵ

class Point
{
public:

	void setX(double x)
	{
		m_X = x;
	}
	double getX()
	{
		return m_X;
	}

	void setY(double y)
	{
		m_Y = y;
	}
	double getY()
	{
		return m_Y;
	}


private:
	double m_X;//x����
	double m_Y;//y����
};

class Circle
{
public:

	void setX(double x)
	{
		m_X = x;
	}
	double getX()
	{
		return m_X;
	}

	void setY(double y)
	{
		m_Y = y;
	}
	double getY()
	{
		return m_Y;
	}

	void setR(double r)
	{
		m_R = r;
	}
	double getR()
	{
		return m_R;
	}

	void calcRelationship(Point& p)
	{
		if ((m_X - p.getX())*(m_X - p.getX()) + (m_Y - p.getY())*(m_Y - p.getY()) == m_R * m_R)
		{
			cout << "����Բ��" << endl;//����Բ��
		}
		else if ((m_X - p.getX())*(m_X - p.getX()) + (m_Y - p.getY())*(m_Y - p.getY()) < m_R * m_R)
		{
			cout << "����Բ��" << endl;//����Բ��
		}
		else
		{
			cout << "����Բ��" << endl;//����Բ��
		}
	}

private:
	//Բ������
	double m_X;
	double m_Y;

	//�뾶
	double m_R;
};

int main()
{
	Circle c;
	Point p;

	p.setX(3);
	p.setY(3);

	c.setR(1);
	c.setX(1);
	c.setY(1);

	c.calcRelationship(p);


	return 0;
}