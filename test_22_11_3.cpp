#include <iostream>
#include <string>
using namespace std;

//����

#include "Add.h"//�������ļ���д

//int main(){
//
//	int x = 10;
//	int y = 20;
//
//	cout << "x+y = " << Add(x,y) << endl;
//
//	return 0;
//}

//�ṹ��
struct Student
{
	string name;
	int age;
	int score;
};

//int main(){
//
//	//struct Student S1;
//	////S1 = { "����", 20, 100 };
//	//S1.name = "����";
//	//S1.age = 20;
//	//S1.score = 100;
//	//cout << "����: " << S1.name << " ����: " << S1.age << " ����: " << S1.score << endl;
//
//	/*struct Student S1 = { "����", 20, 100 };
//	cout << "����: " << S1.name << " ����: " << S1.age << " ����: " << S1.score << endl;*/
//
//	Student S2;//struct��ʡ��
//	S2 = { "����", 20, 100 };
//	cout << "����: " << S2.name << " ����: " << S2.age << " ����: " << S2.score << endl; 
//
//
//	return 0;
//}

//�ṹ������
//int main(){
//
//	Student stuArr[3] = 
//	{ 
//		{ "����", 19, 100 }, 
//		{ "����", 19,  70 }, 
//		{ "����", 18,  60 } 
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << " ����: " << stuArr[i].name
//			 << " ����: " << stuArr[i].age
//			 << " ����: " << stuArr[i].score << endl;
//	}
//	stuArr[2].name = "����";
//	stuArr[2].age = 17;
//	stuArr[2].score = 78;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << " ����: " << stuArr[i].name 
//			 << " ����: " << stuArr[i].age 
//			 << " ����: " << stuArr[i].score << endl;
//	}
//	
//	return 0;
//}

//�ṹ��ָ��
//int main(){
//
//	Student s = { "����", 20, 100 };
//	Student* ps = &s;
//
//	cout << "������ " << ps->name << " ���䣺" << ps->age << " ������" << ps->score << endl;
//
//	return 0;
//}

//�ṹ��Ƕ�׽ṹ��
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
//	t.name = "����";
//	t.age = 56;
//	t.stu.age = 18;
//	t.stu.name = "С��";
//	t.stu.score = 89;
//
//	return 0;
//}

//�ṹ������������
void printStu1(Student stu)//���ݹ������ǽṹ��
{
	stu.age = 100;
	cout << stu.age << stu.name << stu.score << endl;
}

void printStu2(Student* stu)//��ַ����
{
	stu->age = 100;
	cout << stu->age << stu->name << stu->score << endl;
}

int main(){

	Student s = { "����", 19, 99 };
	cout << s.age << s.name << s.score << endl;
	cout << endl;

	printStu1(s);
	cout << s.age << s.name << s.score << endl;

	printStu2(&s);
	cout << s.age << s.name << s.score << endl;

	return 0;
}