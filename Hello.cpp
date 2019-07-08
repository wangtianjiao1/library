#pragma once
#include "stdafx.h"
#include "Hello.h"
#include <iostream>
#include <string>
using namespace std;
Hello::Hello(){}
Hello::~Hello(){}
void Hello:: BeginHello()
{
	cout<<"-------------------------"<<endl;
	cout<<"欢迎使用二组图书管管理系统"<<endl;
	cout<<"-------------------------"<<endl;

}
void Hello::StudentHello()
{

	cout<<"--------------------------------"<<endl;
	cout<<"|"<</*student.name<<*/"BOb|"<<"欢迎使用二组图书馆管理系统"<<endl;
	cout<<"-------------------------------"<<endl;
};
void Hello::TeacherHello()
{
	cout<<"-----------------------------------"<<endl;
	cout<<"图书管理员欢迎使用图书馆管理系统"<<endl;
	cout<<"-----------------------------------"<<endl;
}
void Hello::BorrowBookHello()
{
	cout<<"-------------------------"<<endl;
	cout<<"欢迎使用二组图书管管理系统"<<endl;
	cout<<"-------------------------"<<endl;
}
void Hello::LibraryBook()
{
	cout<<"-------------------------"<<endl;
	cout<<"欢迎进入借阅证证管理系统"<<endl;
	cout<<"-------------------------"<<endl;

}
void Hello::EndHello()
{
	cout<<"------------------------------"<<endl;
	cout<<"谢谢使用，祝您身体平安，万事如意"<<endl;
	cout<<"------------------------------"<<endl;
}
void Hello::BookHello()
{
	cout<<"-------------------------"<<endl;
	cout<<"欢迎图书管理系统"<<endl;
	cout<<"-------------------------"<<endl;
}
string Hello::LibraryLookUpChoice()
{
	cout<<"请选择要查询的学生学号"<<endl;
	string NN;
	cin>>NN;
	return NN;
}
int Hello::StudentChoice()
{
	
	cout<<"---------------------------"<<endl;
	cout<<"1->借阅书本"<<endl;
	cout<<"2->归还书本"<<endl;
	cout<<"3->显示所有已借图书"<<endl;
	cout<<"4->退出系统"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"请选择你需要执行的功能"<<endl;
	int i;
	cin>>i;
	return i;
}
