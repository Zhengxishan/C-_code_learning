#include <iostream>
#include <string>
using namespace std;

//����С��˭���� - ��ʦ�ⷨ    д����ǰ��������������˼·(�㷨)
//int main(){
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	cout << "��������ֻС�������" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	if (a >= b)
//	{
//		if (a >= c)
//		{
//			cout << "��ֻС�����ص���a" << endl;
//		}
//		else
//		{
//			cout << "��ֻС�����ص���c" << endl;
//		}
//	}
//	else
//	{
//		if (b >= c)
//		{
//			cout << "��ֻС�����ص���b" << endl;
//		}
//		else
//		{
//			cout << "��ֻС�����ص���c" << endl;
//		}
//	}
//
//	return 0;
//}

//��Ŀ�����
//int main(){
//	
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = (a > b ? a : b);
//	cout << "c = " << c << endl;
//
//	//C++����Ŀ��������ص��Ǳ�������˿��Ը���Ŀ�������ֵ,C�����в��У���ΪC������Ŀ���������ֵ����ʽ����ͷ���
//	(a > b ? a : b) = 100;//�ȼ���  b = 100
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	return 0;
//}

//whileѭ�� - ��Ļ�ϴ�ӡ0-9
//int main(){
//
//	int num = 0;
//	while (num < 10)
//	{
//		cout << num << endl;
//		num++;
//	}
//
//	return 0;
//}

//��������Ϸ
//#include <ctime>
//int main(){
//
//	//1. ����1-100֮��������(��������������������������)
//	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
//	srand((unsigned int)time(NULL));
//
//	int num = rand() % 100 + 1;//rand()%100:0-99�����
//	//cout << "num = " << num << endl;
//
//	//2. ��Ҳ²�
//	//3. ����ҵĲ²�����ж�
//	//4. �¶�  ��ϲ�¶���,�˳�ѭ��
//	//4. �´�  ���ԣ�������߹�С�����صڶ���
//
//	while (1){
//
//		cout << "���������µ�����: " << endl;
//		int input = 0;
//		cin >> input;
//
//		if (input == num)
//		{
//			cout << "��ϲ���¶���!" << endl;
//			break;
//		}
//		else if (input > num)
//		{
//			cout << "�´��ˣ��µ�������" << endl;
//		}
//		else
//		{
//			cout << "�´��ˣ��µ�����С" << endl;
//		}
//	}
//
//	return 0;
//}

//do-while
//��ӡ0-9
//int main()
//{
//
//	int num = 0;
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num < 10);
//
//	return 0;
//}

//��ӡ����ˮ�ɻ���
//#include <cmath>
//int main()
//{
//	int num = 100;
//
//	do
//	{
//		int a = num / 100;
//		int b = (num % 100) / 10;
//		int c = num % 10;
//		if (pow(a,3) + pow(b,3) + pow(c,3) == num)
//		{
//			cout << num << " ";
//		}
//		num++;
//		
//	} while (num < 1000);
//	
//
//	return 0;
//}

//forѭ��

//��Ļ���0-9
//int main(){
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << i << " ";
//	}
//
//	return 0;
//}

//������
int main(){

	int num = 1;

	for (num = 1; num < 100; num++)
	{
		if (num % 10 == 7 || num / 10 == 7 || num % 7 == 0)
		{
			cout << "������ ";
		}
		else
		{
			cout << num << " ";
		}
	}

	return 0;
}