#include <iostream>
#include <string>
using namespace std;

//Ƕ��ѭ��

//��ӡ��ͼ
//int main(){
//
//	//���ִ��һ�Σ��ڲ�ִ��һ��
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//��ӡ�˷��ھ���
//int main(){
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << j + 1 << "*" << i + 1 << "=" << (j + 1)*(i + 1) << "\t";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//��ֻС�������
//int main(){
//
//	int arr[5] = { 300, 350, 200, 400, 250 };
//	int tmp = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (tmp < arr[i])
//		{
//			tmp = arr[i];
//		}
//	}
//
//	cout << "��ֻС�����ص�����Ϊ: " << tmp << endl;
//
//	return 0;
//}

//Ԫ������
//int main(){
//
//	int arr[] = { 1, 5, 2, 7, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < sz / 2; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz-1-i];
//		arr[sz-1-i] = tmp;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}

//ð������
//int main(){
//
//	int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}

