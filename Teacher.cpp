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
	void Teacher::PrintChoiceMenue()//��ӡ��ʦѡ����棬�������ʱ��������
	{  do{ cout<<"-------------------------"<<endl;
		cout<<"�𾴵�ͼ�����Ա������~��"<<endl;
		cout<<"1->����֤����"<<endl;
		cout<<"2->ͼ�����"<<endl;
		cout<<"3->�˳���½"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"��������Ҫִ�еĹ���"<<endl;
		cin>>TeacherChoice;
		//if(TeacherChoice>=3)
	//	{
		//	cout<<"worry"<<endl;
	//	}
		system("cls");
	
	}
	while (TeacherChoice>=3);
	
	}