#include <iostream>
#include <string>
using namespace std;

//引用用作函数参数

////传值调用
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////传址调用
//void mySwap02(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
////引用 - 起别名，避免适用指针，形参也会影响实参
//void mySwap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(){
//
//	int a = 10;
//	int b = 20;
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	mySwap01(a, b);
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	mySwap02(&a, &b);
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	mySwap02(&a, &b);
//
//	mySwap03(a, b);
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	return 0;
//}

//引用用作函数返回值类型：本质上返回的是返回变量的一个引用

//int& test01()
//{
//	int a = 10;
//	return a;//本质返回的是a的一个别名,注意不能返回局部变量的引用
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int main(){
//
//	int& ref = test02();//test02()就是a的一个别名，ref又是test02()的别名，因此相当于给a定义了一个别名ref
//
//	test02() = 1000;
//
//	//ref和test02()都是a的引用（别名）
//	cout << "ref = " << ref << endl;
//	cout << "test02() = " << test02() << endl;
//
//
//
//	return 0;
//}

//引用的本质是一个指针常量（指针不能更改，即指向的内存空间不能更改,但指向的值可以改）

//常量引用
void showValue(const int& val)//常量引用，防止误操作改变实参的值
{
	//val = 10;
	cout << "val = " << val << endl;
}

int main(){

	////int& ref = 10;//报错，引用必须引向一个内存空间，整数不分配内存。
	//const int& ref = 10;//编译器自行给10创建了临时内存空间,名字未知，可以采用ref访问，内容由于const修饰而不可更改
	////等价代码: int temp = 10;const int& ref = temp;

	int a = 100;
	showValue(a);



	return 0;
}