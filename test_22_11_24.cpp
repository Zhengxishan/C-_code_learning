#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	//纯虚函数
	//包含一个纯虚函数的类就是抽象类
	virtual void func() = 0;
};

class Son : public Base
{
public:
	void func()
	{
		cout << "func()的调用" << endl;
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


