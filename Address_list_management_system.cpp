#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

//ͨѶ¼����ϵͳ

void showMenu()
{
	cout << "***********************" << endl;
	cout << "**** 1. �����ϵ�� ****" << endl;
	cout << "**** 2. ��ʾ��ϵ�� ****" << endl;
	cout << "**** 3. ɾ����ϵ�� ****" << endl;
	cout << "**** 4. ������ϵ�� ****" << endl;
	cout << "**** 5. �޸���ϵ�� ****" << endl;
	cout << "**** 6. �����ϵ�� ****" << endl;
	cout << "**** 0. �˳�ͨѶ¼ ****" << endl;
	cout << "***********************" << endl;
}

//��Ա�ṹ��
struct Person
{
	string m_Name;
	int m_Sex;//1 ��,2Ů
	int m_age;
	string m_Phone;
	string m_Addr;
};


//ͨѶ¼�ṹ��
struct Addressbooks
{
	Person personArray[MAX];
	int m_Size;
};

//�����ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ��������������޷����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷������ϵ����Ϣ!" << endl;
		return;
	}
	else//��Ӿ�����ϵ����Ϣ
	{
		//�������
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//����Ա�
		int sex;
		cout << "�������Ա�: 1 �� 2 Ů" << endl;

		while (true)
		{
			//������ȷ���˳�ѭ��������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		
		//�������
		int age;
		cout << "����������: " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		//��ӵ绰
		string phone;
		cout << "������绰����: " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ӵ�ַ
		string Addr;
		cout << "�������ַ: " << endl;
		cin >> Addr;
		abs->personArray[abs->m_Size].m_Addr = Addr;

		//����ͨѶ¼������
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}

void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����:  " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�:  " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "����:  " << abs->personArray[i].m_age << "\t";
			cout << "�绰:  " << abs->personArray[i].m_Phone << "\t";
			cout << "סַ:  " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}


//�����ϵ���Ƿ���ڣ����ڷ�����ϵ����ͨѶ¼�е�λ�ã������ڷ���-1
int isExist(Addressbooks* abs,string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û����������
		if (abs->personArray[i].m_Name == name)
		{
			return i;//��������
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs)
{
	cout << "������Ҫɾ������ϵ��: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "δ�鵽Ҫɾ������ϵ��" << endl;
	}

	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ������: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	
	if (ret != -1)
	{
		cout << "����:  " << abs->personArray[ret].m_Name << "\t"
			 << "�Ա�:  " << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t"
			 << "����:  " << abs->personArray[ret].m_age << "\t"
			 << "�绰:  " << abs->personArray[ret].m_Phone << "\t"
			 << "סַ:  " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//����
		cout << "�������޸ĺ������: " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�Ա�
		cout << "�������޸ĺ���Ա�: 1. �� 2. Ů" << endl;
		int sex;
		cin >> sex;
		abs->personArray[ret].m_Sex = sex;

		//����
		cout << "�������޸ĺ������: " << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_age = age;

		//�绰
		cout << "�������޸ĺ�ĵ绰: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Addr = phone;

		//סַ
		cout << "�������޸ĺ��סַ: " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//�޼����
	cout << "ͨѶ¼�����" << endl;

	system("pause");
	system("cls");
}

int main(){

	Addressbooks abs;
	abs.m_Size = 0;//�տ�ʼû��

	int select = 0;

	while (true)
	{
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://1. �����ϵ��
			addPerson(&abs);
			break;
		case 2://2. ��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3. ɾ����ϵ��
			deletePerson(&abs);
			break;//break֮ǰ���벻��һ�б���������������
		case 4://4. ������ϵ��
			findPerson(&abs);
			break;
		case 5://5. �޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6. �����ϵ��
			cleanPerson(&abs);
			break;
		case 0://0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;//��������˳�����
			break;
		default:
			break;
		}
	}

	return 0;
}