#include <iostream>
#include <string>
using namespace std;

//C++����ַ���(C�����е��﷨Ҳ����)
//int main(){
//
//	string str = "hello world";
//	cout << str << endl;
//
//	return 0;
//}

//��������bool,ռһ���ֽ�

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

//���ݵ�����
//int main(){
//	
//	//����
//	int a = 0;
//	cout << "������a��ֵ: " << endl;
//	cin >> a;
//	cout << "a = " << a << endl;
//
//	//������
//	float f = 3.14f;
//	cout << "������f��ֵ: " << endl;
//	cin >> f;
//	cout << "f = " << f << endl;
//
//	//�ַ���
//	char str = 'a';
//	cout << "�������ַ�str��ֵ: " << endl;
//	cin >> str;
//	cout << "str = " << str << endl;
//
//	//�ַ�����
//	string str = "asad";
//	cout << "�������ַ�����ֵ: " << endl;
//	cin >> str;
//	cout << "str = " << str << endl;
//
//	//��������(��0��1)
//	bool flag = true;
//	cout << "������bool��ֵ: " << endl;
//	cin >> flag;//�����ʱ��ֻ������0��1
//	cout << "flag = " << flag << endl;
//
//	return 0;
//}

//ѡ��ṹ���� - ��ֻС������أ�������ֻС������أ��ж���һֻ������
int main(){

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "��������ֻС���������" << endl;
	
	//��������Ļ��һ�����������������м��Կո��������scanf��������
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && a > c)
	{
		cout << "��ֻС�����ص���a,����Ϊ: " << a << endl;
	}

	if (b > a && b > c)
	{
		cout << "��ֻС�����ص���b,����Ϊ: " << b << endl;
	}

	if (c > a && c > b)
	{
		cout << "��ֻС�����ص���c,����Ϊ: " << c << endl;
	}
	
	return 0;
}


