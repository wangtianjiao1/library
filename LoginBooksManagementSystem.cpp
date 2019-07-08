#pragma once
#include "stdafx.h"
#include <iostream>
#include "loginutils.h"
#include "loginuser.h"
#include "logindatautils.h"

using namespace std;



Utils* utils = Utils::getInstance();
DataUtils* dataUtils = DataUtils::getInstance();
vector<MenuItem> guestMenu;
vector<MenuItem> adminMenu;
vector<MenuItem> studentMenu;
int choice;
User loginUser;

void initGuestMenu(vector<MenuItem>& guestMenu)
{
	MenuItem item1("1","��½ϵͳ");
	MenuItem item2("2","�˳�ϵͳ");
	guestMenu.push_back(item1);
	guestMenu.push_back(item2);
}

void initAdminMenu(vector<MenuItem>& adminMenu)
{
	adminMenu.push_back(MenuItem("11","����֤����"));
	adminMenu.push_back(MenuItem("12","ͼ�����"));
	adminMenu.push_back(MenuItem("13","�˳���½"));
}

void initStudentMenu(vector<MenuItem>& studentMenu)
{
	studentMenu.push_back(MenuItem("11","��ʾȫ��ͼ��"));
	studentMenu.push_back(MenuItem("12","ͼ���ѯ"));
	studentMenu.push_back(MenuItem("13","����ͼ��"));
	studentMenu.push_back(MenuItem("14","�˻�ͼ��"));
	studentMenu.push_back(MenuItem("15","�˳���¼"));
}


void exitSystem()
{
	cout << "�˳�ϵͳ" << endl;
}


void enterStudent()
{
	utils->printWellcom(loginUser);
	initStudentMenu(studentMenu);
	bool flag = true;
	while (flag)
	{
		utils->printMenu(studentMenu);
		utils->choice();
		//��ѧ���˵���switch case����
// 		switch(utils->getChoice())
// 		{
// 		case 1:
// 			dataUtils->printAllUsers();//֮��ĳ�allbook��ȥ����һ����������ʽ������alluser����Ҫ�õ��ı���
// 			break;
// 		case 2:
// 			{
// 				cout << "������Ҫ��ѯ��ͼ��:" << endl;
// 				string id;
// 				cin >> id;
// 				User u = dataUtils->getUser(id);
// 				cout << "id:" << u.getId() << " | "
// 					<< "username:" << u.getUsername() << " | "
// 					<< "password:" << u.getPassword() << " | "
// 					<< "type:" << u.getType() << endl;
// 				break;
// 			}
// 		case 3:
// 			cout << "����ͼ��" <<endl;
// 			break;
// 		case 4:
// 			cout << "�˻�ͼ��" <<endl;
// 			break;
// 		case 5:
// 			flag = false;
// 			break;
// 		default:
// 			cout << "ϵͳ��֪������˵ʲô" <<endl;
// 
// 		}
	}
}

void enterAdmin()
{
	utils->printWellcom(loginUser);
	initAdminMenu(adminMenu);
	bool flag = true;
	while (flag)
	{
		utils->printMenu(adminMenu);
		utils->choice();
		//�Ź���Ա�˵���switch case����
// 		switch(utils->getChoice())
// 		{
// 		case 1:
// 			dataUtils->printAllUsers();
// 			break;
// 		case 2:
// 			{
// 				cout << "������Ҫ��ѯ��id:" << endl;
// 				string id;
// 				cin >> id;
// 				User u = dataUtils->getUser(id);
// 				cout << "id:" << u.getId() << " | "
// 					<< "username:" << u.getUsername() << " | "
// 					<< "password:" << u.getPassword() << " | "
// 					<< "type:" << u.getType() << endl;
// 				break;
// 			}
// 		case 3:
// 			flag = false;
// 			break;
// 		default:
// 			cout << "ϵͳ��֪������˵ʲô" << endl;
// 		}
	}
}
void loginSystem()
{
	//2.���û������û���������
	cout << "�������û���:";
	string username;
	cin >> username;
	cout << "����������:";
	string password;
	cin >> password;
	loginUser.setUsername(username);
	loginUser.setPassword(password);

	bool ret = loginUser.login();
	if(ret) 
	{
		switch(loginUser.getType())//�������������ж��û�Ȩ��
		{
		case 0:
			enterAdmin();
			break;
		case 1:
			enterStudent();
			break;
		default:
			cout << "��½�ɹ�" <<endl;
		}
		
	}
	else
	{
		cout << "�û���/�������" << endl;
	}
}

int main(int argc, char* argv[])
{
	utils->printWellcom();
	initGuestMenu(guestMenu);
	utils->printMenu(guestMenu);
	utils->choice();
	switch(utils->getChoice())
	{
	case 1:
		loginSystem();
		break;
	case 2:
		exitSystem();
		break;
	default:
		cout << "���ǲ�֪������˵ʲô" << endl;
	}
	return 0;
}