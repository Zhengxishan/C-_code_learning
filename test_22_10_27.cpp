#include <iostream>
using namespace std;

//第一个程序   输出 hello world
//int main(){
//	//在屏幕中输出helllo world
//	cout << "helllo world" << endl;
//
//	return 0;
//}

//定义变量
//int main(){
//	
//	//定义一个整型变量
//	int a = 10;
//	
//	cout << "a=" << a << endl;
//
//	return 0;
//}

//定义常量

//1. #define 宏常量
#define Day 7

int main(){

	//常量不可修改
	cout << "一周共有" << Day << "天" << endl;

	//2. const修饰的变量
	const int month = 12;
	cout << "一年共有" << month << "个月份" << endl;

	return 0;
}




