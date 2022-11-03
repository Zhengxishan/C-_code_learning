#include <iostream>
#include <string>
using namespace std;

//函数

#include "Add.h"//函数分文件编写

//int main(){
//
//	int x = 10;
//	int y = 20;
//
//	cout << "x+y = " << Add(x,y) << endl;
//
//	return 0;
//}

//结构体
struct Student
{
	string name;
	int age;
	int score;
};

//int main(){
//
//	//struct Student S1;
//	////S1 = { "张三", 20, 100 };
//	//S1.name = "张三";
//	//S1.age = 20;
//	//S1.score = 100;
//	//cout << "姓名: " << S1.name << " 年龄: " << S1.age << " 分数: " << S1.score << endl;
//
//	/*struct Student S1 = { "张三", 20, 100 };
//	cout << "姓名: " << S1.name << " 年龄: " << S1.age << " 分数: " << S1.score << endl;*/
//
//	Student S2;//struct可省略
//	S2 = { "张三", 20, 100 };
//	cout << "姓名: " << S2.name << " 年龄: " << S2.age << " 分数: " << S2.score << endl; 
//
//
//	return 0;
//}

//结构体数组
//int main(){
//
//	Student stuArr[3] = 
//	{ 
//		{ "张三", 19, 100 }, 
//		{ "李四", 19,  70 }, 
//		{ "王五", 18,  60 } 
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << " 姓名: " << stuArr[i].name
//			 << " 年龄: " << stuArr[i].age
//			 << " 分数: " << stuArr[i].score << endl;
//	}
//	stuArr[2].name = "赵六";
//	stuArr[2].age = 17;
//	stuArr[2].score = 78;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << " 姓名: " << stuArr[i].name 
//			 << " 年龄: " << stuArr[i].age 
//			 << " 分数: " << stuArr[i].score << endl;
//	}
//	
//	return 0;
//}

//结构体指针
//int main(){
//
//	Student s = { "张三", 20, 100 };
//	Student* ps = &s;
//
//	cout << "姓名： " << ps->name << " 年龄：" << ps->age << " 分数：" << ps->score << endl;
//
//	return 0;
//}

//结构体嵌套结构体
struct Teacher
{
	int id;
	string name;
	int age;
	Student stu;
};

//int main(){
//
//	Teacher t;
//	t.id = 10000;
//	t.name = "老岳";
//	t.age = 56;
//	t.stu.age = 18;
//	t.stu.name = "小王";
//	t.stu.score = 89;
//
//	return 0;
//}

//结构体做函数参数
void printStu1(Student stu)//传递过来的是结构体
{
	stu.age = 100;
	cout << stu.age << stu.name << stu.score << endl;
}

void printStu2(Student* stu)//传址调用
{
	stu->age = 100;
	cout << stu->age << stu->name << stu->score << endl;
}

int main(){

	Student s = { "张三", 19, 99 };
	cout << s.age << s.name << s.score << endl;
	cout << endl;

	printStu1(s);
	cout << s.age << s.name << s.score << endl;

	printStu2(&s);
	cout << s.age << s.name << s.score << endl;

	return 0;
}