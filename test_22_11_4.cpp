#include <iostream>
#include <string>
using namespace std;

//结构体中const使用场景

//struct Student
//{
//	string name;
//	int age;
//	int score;
//};

//void printStu(const Student* stu)//加入const防止在调用函数过程中 误操作 把原始数据修改
//{
//	//stu->age = 100;//误操作
//	cout << "姓名: " << stu->name << " 年龄: " << stu->age << " 分数: " << stu->score << endl;
//}
//
//
//int main(){
//
//	Student s = { "张三", 20, 100 };
//
//	printStu(&s);
//
//	return 0;
//}

//结构体案例一
#include <ctime>

//struct Student
//{
//	string sName;
//	int score;
//};
//
//struct Teacher
//{
//	string tName;
//	Student sArray[5];
//};
//
//void allocateSpace(Teacher* tArray, int len)
//{
//	string nameSeed = "ABCDE";//字符串可以当字符数组用
//
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];//字符串加减和数的加减相同，不需要拼接函数
//
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//
//			tArray[i].sArray[j].score = rand() % 101;
//		}
//	}
//}
//
//void printInfo(Teacher* tArray, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "第" << i+1 << "位老师的姓名为: " << tArray[i].tName << endl;
//		cout << "第" << i+1 << "位老师带的学生的姓名和分数分别为: " << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "姓名: " << tArray[i].sArray[j].sName << " 分数: " << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main(){
//
//	Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	srand((unsigned int)time(NULL));//设置随机数种子
//
//	allocateSpace(tArray, len);
//
//	printInfo(tArray, len);
//	
//
//	return 0;
//}

//结构体案例二
//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//int main(){
//
//	Hero heros[5] = 
//	{
//		{ "刘备", 23, "男" },
//		{ "关羽", 22, "男" },
//		{ "张飞", 20, "男" },
//		{ "赵云", 21, "男" },
//		{ "貂蝉", 19, "女" },
//	};
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << heros[i].name << " " << heros[i].age << " " << heros[i].sex << endl;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4 - i; j++)
//		{
//			if (heros[j].age > heros[j + 1].age)
//			{
//				Hero temp = heros[j];
//				heros[j] = heros[j + 1];
//				heros[j + 1] = temp;
//			}
//		}
//	}
//
//	cout << "排序后的英雄信息如下: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << heros[i].name << " " << heros[i].age << " " << heros[i].sex << endl;
//	}
//
//	return 0;
//}