#pragma once
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include "Teacher.h"
#include <iostream>

using namespace std;

	Teacher::Teacher(){}
	Teacher::~Teacher(){}
	int Teacher::GetTeacherChoice()
	{
		return TeacherChoice;
	}
	void Teacher::PrintChoiceMenue()//打印教师选择界面，输入错误时重新输入
	{  do{ cout<<"-------------------------"<<endl;
		cout<<"尊敬的图书管理员，您好~！"<<endl;
		cout<<"1->借阅证管理"<<endl;
		cout<<"2->图书管理"<<endl;
		cout<<"3->退出登陆"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"请输入需要执行的功能"<<endl;
		cin>>TeacherChoice;
		//if(TeacherChoice>=3)
	//	{
		//	cout<<"worry"<<endl;
	//	}
		system("cls");
	
	}
	while (TeacherChoice>=3);
	
	}