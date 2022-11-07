#include <iostream>
#include <string>
using namespace std;

//new关键字开辟堆区内存

//int* func()
//{
// 	int* p = new int(10);//new关键字可以在堆区创建变量，返回变量的地址
//	return p;//p是一个局部变量，放在栈区
//}
//
//int main(){
//
//
//	cout << *func() << endl;
//	cout << *func() << endl;
//
//	//函数执行完毕局部变量释放，再次调用报错
//	//cout << p << endl;
//
//
//	return 0;
//}

//delete关键字释放栈区内存
//int* func()
//{
//	int* p = new int(10);//堆区数据程序员管理开辟释放
//	return p;
//}
//
//void test1()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;//释放p地址的内存
//
//	//cout << *p << endl;//再输出原则上报错
//}
//
////堆区开辟数组
//void test2()
//{
//	int* arr = new int[10];//在堆区创建数组，返回首元素地址（注意不是返回数组地址）
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	delete[] arr;//释放数组
//
//}
//
//int main(){
//
//	test1();
//    test2();
//
//	return 0;
//}

//引用:1. 必须初始化；2. 初始化后不再改变。
int main(){

	int a = 10;
	int &b = a;//给a起别名为b,a b完全等价

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	

	return 0;
}

