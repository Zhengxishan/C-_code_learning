#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	//���麯��
	//����һ�����麯��������ǳ�����
	virtual void func() = 0;
};

class Son : public Base
{
public:
	void func()
	{
		cout << "func()�ĵ���" << endl;
	}

};


void test()
{
	Base* b = new Son;

	b->func();

}



int main()
{
	test();

	return 0;
}


