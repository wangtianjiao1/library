#pragma once
#include "StdAfx.h"
#include <iostream>
#include "loginutils.h"

using namespace std;

Utils::~Utils()
{

}

Utils* Utils::getInstance()
{
	static Utils instance;
	return& instance;
}

void Utils::printWellcom()
{
	cout << "--------------------------------------" << endl;
	cout << "   欢迎使用武汉轻工大学图书管理系统   " << endl;
	cout << "--------------------------------------" << endl;
}

void Utils::printWellcom(User& user)
{
	cout << "--------------------------------" << endl;
	cout << user.getUsername() << "[" << user.getTypeName() << "]" <<endl;
	cout << "--------------------------------" << endl;
}

void Utils::printMenu(vector<MenuItem>& items)
{
	//vector<MenuItem>::iterator-->是一个MenuItem的指针类型
	//items.begin()-->得到该集合中第一个元素的指针
	vector<MenuItem>::iterator p = items.begin();
	for (int i=0; i<items.size(); i++)
	{
		MenuItem temp = *p;
		cout << "-->" << (i+1) << "." << temp.getText() << endl;
		p++;
	}

}

int Utils::getChoice()
{
	return mChoice;
}

void Utils::choice()
{	
	cout << "请选择:";
	cin >> mChoice;
}

void Utils::splitStr(string line,vector<string>& strs,string split)
{
	int pos1 = 0;
	int pos2 = 0;
	pos2 = line.find(/*找什么字符*/split);
	while(pos2 != string::npos)
	{
		strs.push_back(line.substr(/*从哪里开始*/pos1,/*截取多长*/pos2 - pos1));
		pos1 = pos2 + split.length();
		pos2 = line.find(/*找什么字符*/split,pos1);
	}
	if(pos1 < line.size())
	{
		strs.push_back(line.substr(pos1));
	}

}
