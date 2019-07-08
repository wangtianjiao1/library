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
	MenuItem item1("1","登陆系统");
	MenuItem item2("2","退出系统");
	guestMenu.push_back(item1);
	guestMenu.push_back(item2);
}

void initAdminMenu(vector<MenuItem>& adminMenu)
{
	adminMenu.push_back(MenuItem("11","借阅证管理"));
	adminMenu.push_back(MenuItem("12","图书管理"));
	adminMenu.push_back(MenuItem("13","退出登陆"));
}

void initStudentMenu(vector<MenuItem>& studentMenu)
{
	studentMenu.push_back(MenuItem("11","显示全部图书"));
	studentMenu.push_back(MenuItem("12","图书查询"));
	studentMenu.push_back(MenuItem("13","借阅图书"));
	studentMenu.push_back(MenuItem("14","退还图书"));
	studentMenu.push_back(MenuItem("15","退出登录"));
}


void exitSystem()
{
	cout << "退出系统" << endl;
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
		//放学生菜单的switch case函数
// 		switch(utils->getChoice())
// 		{
// 		case 1:
// 			dataUtils->printAllUsers();//之后改成allbook，去建立一个函数，形式类似于alluser，需要用到文本；
// 			break;
// 		case 2:
// 			{
// 				cout << "请输入要查询的图书:" << endl;
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
// 			cout << "借阅图书" <<endl;
// 			break;
// 		case 4:
// 			cout << "退还图书" <<endl;
// 			break;
// 		case 5:
// 			flag = false;
// 			break;
// 		default:
// 			cout << "系统不知道你在说什么" <<endl;
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
		//放管理员菜单的switch case函数
// 		switch(utils->getChoice())
// 		{
// 		case 1:
// 			dataUtils->printAllUsers();
// 			break;
// 		case 2:
// 			{
// 				cout << "请输入要查询的id:" << endl;
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
// 			cout << "系统不知道你在说什么" << endl;
// 		}
	}
}
void loginSystem()
{
	//2.让用户输入用户名和密码
	cout << "请输入用户名:";
	string username;
	cin >> username;
	cout << "请输入密码:";
	string password;
	cin >> password;
	loginUser.setUsername(username);
	loginUser.setPassword(password);

	bool ret = loginUser.login();
	if(ret) 
	{
		switch(loginUser.getType())//根据数据类型判断用户权限
		{
		case 0:
			enterAdmin();
			break;
		case 1:
			enterStudent();
			break;
		default:
			cout << "登陆成功" <<endl;
		}
		
	}
	else
	{
		cout << "用户名/密码错误" << endl;
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
		cout << "我们不知道你在说什么" << endl;
	}
	return 0;
}