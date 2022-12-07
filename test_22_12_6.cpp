#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//void test01()
//{
//	ofstream ofs;
//
//	ofs.open("test.txt", ios::out);
//
//	ofs << "����������" << endl;
//	ofs << "�ձ���" << endl;
//	ofs << "���䣺18" << endl;
//
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//void test01()
//{
//	ifstream ifs;
//
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//������
//	//char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}
//
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//������ д�ļ�

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	ofstream ofs("Person.txt", ios::out | ios::binary);

	//ofs.open("Person.txt", ios::out | ios::binary);

	Person p = { "����", 19 };
	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();
}

void test02()
{
	ifstream ifs("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << p.m_Name << endl;
	cout << p.m_Age << endl;

	ifs.close();

}

int main()
{
	//test01();
	test02();

	return 0;
}

