#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

//通讯录管理系统

void showMenu()
{
	cout << "***********************" << endl;
	cout << "**** 1. 添加联系人 ****" << endl;
	cout << "**** 2. 显示联系人 ****" << endl;
	cout << "**** 3. 删除联系人 ****" << endl;
	cout << "**** 4. 查找联系人 ****" << endl;
	cout << "**** 5. 修改联系人 ****" << endl;
	cout << "**** 6. 清空联系人 ****" << endl;
	cout << "**** 0. 退出通讯录 ****" << endl;
	cout << "***********************" << endl;
}

//成员结构体
struct Person
{
	string m_Name;
	int m_Sex;//1 男,2女
	int m_age;
	string m_Phone;
	string m_Addr;
};


//通讯录结构体
struct Addressbooks
{
	Person personArray[MAX];
	int m_Size;
};

//添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满，满了则无法添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加联系人信息!" << endl;
		return;
	}
	else//添加具体联系人信息
	{
		//添加姓名
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//添加性别
		int sex;
		cout << "请输入性别: 1 男 2 女" << endl;

		while (true)
		{
			//输入正确，退出循环；输入有误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		
		//添加年龄
		int age;
		cout << "请输入年龄: " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		//添加电话
		string phone;
		cout << "请输入电话号码: " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//添加地址
		string Addr;
		cout << "请输入地址: " << endl;
		cin >> Addr;
		abs->personArray[abs->m_Size].m_Addr = Addr;

		//更新通讯录中人数
		abs->m_Size++;

		cout << "添加成功" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名:  " << abs->personArray[i].m_Name << "\t";
			cout << "性别:  " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄:  " << abs->personArray[i].m_age << "\t";
			cout << "电话:  " << abs->personArray[i].m_Phone << "\t";
			cout << "住址:  " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int main(){

	Addressbooks abs;
	abs.m_Size = 0;//刚开始没人

	int select = 0;

	while (true)
	{
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://1. 添加联系人
			addPerson(&abs);
			break;
		case 2://2. 显示联系人
			showPerson(&abs);
			break;
		case 3://3. 删除联系人
			break;
		case 4://4. 查找联系人
			break;
		case 5://5. 修改联系人
			break;
		case 6://6. 清空联系人
			break;
		case 0://0. 退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;//按任意键退出程序
			break;
		default:
			break;
		}
	}

	return 0;
}