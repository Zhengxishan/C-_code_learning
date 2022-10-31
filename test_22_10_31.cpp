#include <iostream>
#include <string>
using namespace std;

//C++风格字符串(C语言中的语法也适用)
//int main(){
//
//	string str = "hello world";
//	cout << str << endl;
//
//	return 0;
//}

//布尔类型bool,占一个字节

//int main(){
//
//	bool flag = true;
//	cout << flag << endl;//1
//
//	bool flag1 = false;
//	cout << flag1 << endl;//0
//
//	cout << "size of bool is: " << sizeof(bool) << endl;//1
//
//	return 0;
//}

//数据的输入
//int main(){
//	
//	//整型
//	int a = 0;
//	cout << "请输入a的值: " << endl;
//	cin >> a;
//	cout << "a = " << a << endl;
//
//	//浮点型
//	float f = 3.14f;
//	cout << "请输入f的值: " << endl;
//	cin >> f;
//	cout << "f = " << f << endl;
//
//	//字符型
//	char str = 'a';
//	cout << "请输入字符str的值: " << endl;
//	cin >> str;
//	cout << "str = " << str << endl;
//
//	//字符串型
//	string str = "asad";
//	cout << "请输入字符串的值: " << endl;
//	cin >> str;
//	cout << "str = " << str << endl;
//
//	//布尔类型(非0即1)
//	bool flag = true;
//	cout << "请输入bool的值: " << endl;
//	cin >> flag;//输入的时候只能输入0和1
//	cout << "flag = " << flag << endl;
//
//	return 0;
//}

//选择结构案例 - 三只小猪称体重：输入三只小猪的体重，判断哪一只猪最终
int main(){

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "请输入三只小猪的重量：" << endl;
	
	//可以在屏幕上一下子输入三个数，中间以空格隔开，和scanf函数类似
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && a > c)
	{
		cout << "三只小猪最重的是a,重量为: " << a << endl;
	}

	if (b > a && b > c)
	{
		cout << "三只小猪最重的是b,重量为: " << b << endl;
	}

	if (c > a && c > b)
	{
		cout << "三只小猪最重的是c,重量为: " << c << endl;
	}
	
	return 0;
}


