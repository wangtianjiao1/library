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
	ifstream infile("./data/user.txt",ios::in);//��ȡ�ļ��е�����
	if(infile.is_open())
	{
		string line;
		while(getline(infile,line))
		{
			vector<string> datas;
			utils->splitStr(line,datas," ");
			//��datasƥ���һ��user����
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
			//��user����ŵ�allUsers��
			allUsers.push_back(temp);
		}
	}
	else
	{
		cout << "�ļ���ʧ��" << endl;
	}
}




vector<User>& DataUtils::getAllUsers()
{
	readAllUsers();
	return allUsers;
}
