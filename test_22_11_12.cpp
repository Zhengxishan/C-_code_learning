#include <iostream>
#include <string>
using namespace std;

//访问权限

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
//		pNmae = "张三";
//		pCar = "拖拉机";
//		pPassword = 123456;
//	}
//};
//
//int main()
//{
//	Person p1;
//
//	p1.pNmae = "李四";
//
//	//报错，说明保护权限和私有权限类外不可以访问
//	//p1.pCar = "奔驰";
//	//p1.pPassword = 123;
//
//	p1.func();
//
//
//	return 0;
//}

//c++中struct和class 唯一区别 就是默认访问权限不同，前者默认公共，后者默认私有
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

//成员属性私有化

//class Person
//{
//public:
//
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//获取年龄  可读可写，写的话必须在0-150内
//	int getAge()
//	{
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age<0 || age>150)
//		{
//			m_Age = 0;
//			cout << "你这个老妖精" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//设置情人
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//姓名  可读可写
//	string m_Name;
//
//	//年龄   只读
//	int m_Age;
//
//	//情人  只写
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//
//	cout << "姓名为： " << p.getName() << endl;
//
//	p.setAge(18);
//	//p.setAge(167);
//	cout << "年龄为： " << p.getAge() << endl;
//
//	p.setLover("小美");
//
//	return 0;
//}

//立方体类
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
//			cout << "输入错误，请重新输入" << endl;
//			return;
//		}
//		m_L = length;
//	}
//
//	void setWidth(double width)
//	{
//		if (width <= 0)
//		{
//			cout << "输入错误，请重新输入" << endl;
//			return;
//		}
//		m_W = width;
//	}
//
//	void setHeight(double height)
//	{
//		if (height <= 0)
//		{
//			cout << "输入错误，请重新输入" << endl;
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
//	//成员函数判断
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
////我写的
//int isEqual(Cube*  c1, Cube* c2)//也可以返回bool
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
////老师所写
//bool isEqual(Cube& c1, Cube& c2)//使用引用传参不需要考虑指针的问题,语法简洁
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
//	cout << "c1的表面积为：" << c1.calcArea() << "  c1的体积为：" << c1.calcVolume() << endl;
//
//	c2.setLength(10);
//	c2.setWidth(10);
//	c2.setHeight(10);
//
//	cout << "c2的表面积为：" << c2.calcArea() << "  c2的体积为：" << c2.calcVolume() << endl;
//
//	//全局函数判断是否相等
//	
//	//if (isEqual(&c1, &c2) == 0)
//	if (isEqual(c1,c2) == true)
//	{
//		cout << "c1与c2相等" << endl;
//	}
//	else
//	{
//		cout << "c1与c2不相等" << endl;
//	}
//
//	//成员函数判断
//	if (c1.isEqual(c2) == true)
//	{
//		cout << "c1与c2相等" << endl;
//	}
//	else
//	{
//		cout << "c1与c2不相等" << endl;
//	}
//
//
//	return 0;
//}

//点和圆的关系

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
	double m_X;//x坐标
	double m_Y;//y坐标
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
			cout << "点在圆上" << endl;//点在圆上
		}
		else if ((m_X - p.getX())*(m_X - p.getX()) + (m_Y - p.getY())*(m_Y - p.getY()) < m_R * m_R)
		{
			cout << "点在圆内" << endl;//点在圆内
		}
		else
		{
			cout << "点在圆外" << endl;//点在圆外
		}
	}

private:
	//圆心坐标
	double m_X;
	double m_Y;

	//半径
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