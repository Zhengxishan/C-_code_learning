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
//	ofs << "姓名：张三" << endl;
//	ofs << "姓别：男" << endl;
//	ofs << "年龄：18" << endl;
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
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//读数据
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

//二进制 写文件

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

	Person p = { "张三", 19 };
	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();
}

void test02()
{
	ifstream ifs("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
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

