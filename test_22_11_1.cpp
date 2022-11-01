#include <iostream>
#include <string>
using namespace std;

//三个小猪谁最重 - 老师解法    写代码前必须现有清晰的思路(算法)
//int main(){
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	cout << "请输入三只小猪的重量" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	if (a >= b)
//	{
//		if (a >= c)
//		{
//			cout << "三只小猪最重的是a" << endl;
//		}
//		else
//		{
//			cout << "三只小猪最重的是c" << endl;
//		}
//	}
//	else
//	{
//		if (b >= c)
//		{
//			cout << "三只小猪最重的是b" << endl;
//		}
//		else
//		{
//			cout << "三只小猪最重的是c" << endl;
//		}
//	}
//
//	return 0;
//}

//三目运算符
//int main(){
//	
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = (a > b ? a : b);
//	cout << "c = " << c << endl;
//
//	//C++中三目运算符返回的是变量，因此可以给三目运算符赋值,C语言中不行，因为C语言三目运算符是以值的形式输入和返回
//	(a > b ? a : b) = 100;//等价于  b = 100
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	return 0;
//}

//while循环 - 屏幕上打印0-9
//int main(){
//
//	int num = 0;
//	while (num < 10)
//	{
//		cout << num << endl;
//		num++;
//	}
//
//	return 0;
//}

//猜数字游戏
//#include <ctime>
//int main(){
//
//	//1. 生成1-100之间的随机数(生成随机数必须设置随机数种子)
//	//添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
//	srand((unsigned int)time(NULL));
//
//	int num = rand() % 100 + 1;//rand()%100:0-99随机数
//	//cout << "num = " << num << endl;
//
//	//2. 玩家猜测
//	//3. 对玩家的猜测进行判断
//	//4. 猜对  恭喜猜对了,退出循环
//	//4. 猜错  不对，过大或者过小，返回第二步
//
//	while (1){
//
//		cout << "请输入您猜的数字: " << endl;
//		int input = 0;
//		cin >> input;
//
//		if (input == num)
//		{
//			cout << "恭喜您猜对了!" << endl;
//			break;
//		}
//		else if (input > num)
//		{
//			cout << "猜错了，猜的数过大" << endl;
//		}
//		else
//		{
//			cout << "猜错了，猜的数过小" << endl;
//		}
//	}
//
//	return 0;
//}

//do-while
//打印0-9
//int main()
//{
//
//	int num = 0;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num < 10);
//
//	return 0;
//}

//打印所有水仙花数
//#include <cmath>
//int main()
//{
//	int num = 100;
//
//	do
//	{
//		int a = num / 100;
//		int b = (num % 100) / 10;
//		int c = num % 10;
//		if (pow(a,3) + pow(b,3) + pow(c,3) == num)
//		{
//			cout << num << " ";
//		}
//		num++;
//		
//	} while (num < 1000);
//	
//
//	return 0;
//}

//for循环

//屏幕输出0-9
//int main(){
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << i << " ";
//	}
//
//	return 0;
//}

//敲桌子
int main(){

	int num = 1;

	for (num = 1; num < 100; num++)
	{
		if (num % 10 == 7 || num / 10 == 7 || num % 7 == 0)
		{
			cout << "敲桌子 ";
		}
		else
		{
			cout << num << " ";
		}
	}

	return 0;
}