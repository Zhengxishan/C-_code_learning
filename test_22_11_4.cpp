#include <iostream>
#include <string>
using namespace std;

//�ṹ����constʹ�ó���

//struct Student
//{
//	string name;
//	int age;
//	int score;
//};

//void printStu(const Student* stu)//����const��ֹ�ڵ��ú��������� ����� ��ԭʼ�����޸�
//{
//	//stu->age = 100;//�����
//	cout << "����: " << stu->name << " ����: " << stu->age << " ����: " << stu->score << endl;
//}
//
//
//int main(){
//
//	Student s = { "����", 20, 100 };
//
//	printStu(&s);
//
//	return 0;
//}

//�ṹ�尸��һ
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
//	string nameSeed = "ABCDE";//�ַ������Ե��ַ�������
//
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];//�ַ����Ӽ������ļӼ���ͬ������Ҫƴ�Ӻ���
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
//		cout << "��" << i+1 << "λ��ʦ������Ϊ: " << tArray[i].tName << endl;
//		cout << "��" << i+1 << "λ��ʦ����ѧ���������ͷ����ֱ�Ϊ: " << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "����: " << tArray[i].sArray[j].sName << " ����: " << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main(){
//
//	Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	srand((unsigned int)time(NULL));//�������������
//
//	allocateSpace(tArray, len);
//
//	printInfo(tArray, len);
//	
//
//	return 0;
//}

//�ṹ�尸����
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
//		{ "����", 23, "��" },
//		{ "����", 22, "��" },
//		{ "�ŷ�", 20, "��" },
//		{ "����", 21, "��" },
//		{ "����", 19, "Ů" },
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
//	cout << "������Ӣ����Ϣ����: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << heros[i].name << " " << heros[i].age << " " << heros[i].sex << endl;
//	}
//
//	return 0;
//}