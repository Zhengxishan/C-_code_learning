#include <iostream>
#include <string>
using namespace std;

//����������������

////��ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////��ַ����
//void mySwap02(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
////���� - ���������������ָ�룬�β�Ҳ��Ӱ��ʵ��
//void mySwap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main(){
//
//	int a = 10;
//	int b = 20;
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	mySwap01(a, b);
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	mySwap02(&a, &b);
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	mySwap02(&a, &b);
//
//	mySwap03(a, b);
//
//	cout << "a = " << a << " b = " << b << endl;
//
//	return 0;
//}

//����������������ֵ���ͣ������Ϸ��ص��Ƿ��ر�����һ������

//int& test01()
//{
//	int a = 10;
//	return a;//���ʷ��ص���a��һ������,ע�ⲻ�ܷ��ؾֲ�����������
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int main(){
//
//	int& ref = test02();//test02()����a��һ��������ref����test02()�ı���������൱�ڸ�a������һ������ref
//
//	test02() = 1000;
//
//	//ref��test02()����a�����ã�������
//	cout << "ref = " << ref << endl;
//	cout << "test02() = " << test02() << endl;
//
//
//
//	return 0;
//}

//���õı�����һ��ָ�볣����ָ�벻�ܸ��ģ���ָ����ڴ�ռ䲻�ܸ���,��ָ���ֵ���Ըģ�

//��������
void showValue(const int& val)//�������ã���ֹ������ı�ʵ�ε�ֵ
{
	//val = 10;
	cout << "val = " << val << endl;
}

int main(){

	////int& ref = 10;//�������ñ�������һ���ڴ�ռ䣬�����������ڴ档
	//const int& ref = 10;//���������и�10��������ʱ�ڴ�ռ�,����δ֪�����Բ���ref���ʣ���������const���ζ����ɸ���
	////�ȼ۴���: int temp = 10;const int& ref = temp;

	int a = 100;
	showValue(a);



	return 0;
}