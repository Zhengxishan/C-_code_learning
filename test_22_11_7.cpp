#include <iostream>
#include <string>
using namespace std;

//new�ؼ��ֿ��ٶ����ڴ�

//int* func()
//{
// 	int* p = new int(10);//new�ؼ��ֿ����ڶ����������������ر����ĵ�ַ
//	return p;//p��һ���ֲ�����������ջ��
//}
//
//int main(){
//
//
//	cout << *func() << endl;
//	cout << *func() << endl;
//
//	//����ִ����Ͼֲ������ͷţ��ٴε��ñ���
//	//cout << p << endl;
//
//
//	return 0;
//}

//delete�ؼ����ͷ�ջ���ڴ�
//int* func()
//{
//	int* p = new int(10);//�������ݳ���Ա�������ͷ�
//	return p;
//}
//
//void test1()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;//�ͷ�p��ַ���ڴ�
//
//	//cout << *p << endl;//�����ԭ���ϱ���
//}
//
////������������
//void test2()
//{
//	int* arr = new int[10];//�ڶ����������飬������Ԫ�ص�ַ��ע�ⲻ�Ƿ��������ַ��
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	delete[] arr;//�ͷ�����
//
//}
//
//int main(){
//
//	test1();
//    test2();
//
//	return 0;
//}

//����:1. �����ʼ����2. ��ʼ�����ٸı䡣
int main(){

	int a = 10;
	int &b = a;//��a�����Ϊb,a b��ȫ�ȼ�

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	

	return 0;
}

