#include <iostream>
#include <string>
using namespace std;

//函数提高

//函数默认参数

//int func(int a, int b = 20, int c = 30)//定义b的默认值为20，c的默认值为30，调用函数的时候可以不去给他们传参
//{
//	return a + b + c;
//}

//一旦某个形参定义了默认值，其后的所有形参都必须有默认值
//int func1(int a, int b = 20, int c)
//{
//	return a + b + c;
//}

//函数声明有了默认参数，函数实现就不能有默认参数,相当于默认参数的重定义，编译器无法确定按照哪个默认值来
//声明和实验只能有一个定义默认参数

//int func2(int a, int b = 20, int c = 30);
//
//int func2(int a , int b = 20, int c = 30)
//{
//	return a + b + c;
//}


//int main(){
//
//	cout << func(10) << endl;
//	cout << func(10,30) << endl;//给有默认值的参数传参取传入的参数值（有自己的数据适用自己的，没有使用默认值）
//	//cout << func2(10, 20, 30) << endl;
//
//	return 0;
//}

//函数的占位参数

//定义占位参数必须填入数据，否则报错
//占位参数也可以有默认参数
//void func(int a, int = 10)
//{
//	cout << "占位参数" << endl;
//}
//
//int main(){
//
//
//	func(10,1);
//	func(10);
//
//	return 0;
//}

//函数重载: 可以让两个函数函数名相同,提高代码复用性

//函数重载的条件
//1. 同一个作用域下(目前所写均在全局作用域)
//2. 函数名相同
//3. 函数参数类型不同 或顺序不同 或个数不同

//void func()
//{
//	cout << "func的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a)的调用" << endl;
//}
//
//void func(double a,int b)
//{
//	cout << "func(double a,int b)的调用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//}

//返回值类型不同不能作为函数重载的条件
//int func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//	return 0;
//}

//int main(){
//
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//
//	return 0;
//}

//引用作为函数重载的条件(因为引用本质上是定义了指针常量类型)

//void func(int& a)
//{
//	cout << "func(int& a)调用" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int& a)调用" << endl;
//}
//
////函数重载碰到默认参数容易出错，因此写函数重载尽量不要写默认参数
//
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10)的调用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a)的调用" << endl;
//}
//
//int main(){
//
//	int a = 10;
//	const int b = 10;
//
//	func(a);
//	func(10);//加上const编译器会自动生成一个临时变量,具体见昨天的代码
//	func(b);
//
//	//func2(10);//报错，编译器不知道该调用哪个函数（二义性）
//
//
//	return 0;
//}

//类和对象

//设计一个圆类，求圆的周长

////圆周率
//const double PI = 3.14;
//
////定义⚪类
//class Circle
//{
//	//访问权限
//	//公共权限，类内外都能访问
//public:
//	//属性(变量)
//	double radius;
//
//	//行为(函数)
//	//获取⚪的周长
//	double calcPerimeter()
//	{
//		return 2 * PI*radius;
//	}
//};
//
//int main(){
//
//	//通过圆类创建具体的圆(对象)
//	//实例化：通过一个类创建一个对象的过程
//	Circle c1;
//
//	//给对象c1的属性赋值
//	c1.radius = 10;
//
//	//打印圆的周长
//	cout << "圆的周长为： " << c1.calcPerimeter() << endl;
//
//	return 0;
//}

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student
{
public:

	//类中的属性和行为统一称为成员
	//属性  =   成员属性  =  成员变量
	//行为  =   成员函数  =  成员方法

	string s_name;
	string s_number;

	void setNmae(string name)
	{
		s_name = name;
	}

	void setNumber(string number)
	{
		s_number = number;
	}

	void showStudent()
	{
		cout << "姓名：" << s_name << " 学号：" << s_number << endl;
	}
};

int main()
{

	Student s1;

	s1.setNmae("张三");
	s1.setNumber("1039180609");
	s1.showStudent();

	return 0;
}
