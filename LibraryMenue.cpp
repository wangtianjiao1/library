#pragma  once
#include "stdafx.h"
#include <iostream>
#include "libraryMenue.h"
using namespace std;
LibraryMenue::LibraryMenue(){}
LibraryMenue::~LibraryMenue(){}
int LibraryMenue::GetMyChoice()
{
	return MyChoice;
}
void LibraryMenue::PrintLibraryMenue()
{  int i;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"欢迎使用借阅证管理系统，请选择你所需要执行的功能"<<endl;
	cout<<"1-->显示所有借阅证"<<endl;
	cout<<"2-->查询借阅证"<<endl;
	cout<<"3-->增添学生借阅证"<<endl;
	cout<<"4-->删除借阅证"<<endl;
	cout<<"5-->修改借阅证"<<endl;
	cout<<"4-->返回上一级"<<endl;
	cout<<"----------------------------------------------"<<endl;
	cin>>i;
	MyChoice=i;


}
void  LibraryMenue::PrintLibraryLookupMene()
{  int i;

cout<<"--------------------------------------------"<<endl;
cout<<"欢迎使用借阅证查询系统，请选择你所需要执行的功能"<<endl;
cout<<"1-->删除借阅证"<<endl;
cout<<"2-->修改借阅证信息"<<endl;
cout<<"----------------------------------------------"<<endl;
cin>>i;
MyChoice=i;
}
