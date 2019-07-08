#pragma once
#include "StdAfx.h"
#include "logindatautils.h"
#include "loginutils.h"
#include <fstream>
#include <iostream>


DataUtils::~DataUtils(){}



void DataUtils::readAllUsers()
{
	Utils* utils = Utils::getInstance();
	ifstream infile("./data/user.txt",ios::in);//读取文件中的数据
	if(infile.is_open())
	{
		string line;
		while(getline(infile,line))
		{
			vector<string> datas;
			utils->splitStr(line,datas," ");
			//将datas匹配成一个user对象
			vector<string>::iterator p = datas.begin();
			string id = *p;
			p++;
			string username = *p;
			p++;
			string password = *p;
			p++;
			int type = atoi((*p).c_str());
			User temp;
			temp.setId(id);
			temp.setPassword(password);
			temp.setUsername(username);
			temp.setType(type);
			//把user对象放到allUsers中
			allUsers.push_back(temp);
		}
	}
	else
	{
		cout << "文件打开失败" << endl;
	}
}




vector<User>& DataUtils::getAllUsers()
{
	readAllUsers();
	return allUsers;
}
