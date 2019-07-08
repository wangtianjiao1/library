#pragma once
#include "StdAfx.h"
#include "loginuser.h"
#include "loginutils.h"
#include "logindatautils.h"
#include <vector>
#include <iostream>

User::User(){}
User::~User(){}

string User::getTypeName()
{
	string result;
	switch(type)
	{
	case 0:
		result = "ͼ�����Ա�˺�";
		break;
	case 1:
		result = "ѧ���˺�";
		break;
	}
	return result;
}

bool User::login()
{
	DataUtils datautils;
	//1.��ȡȫ�����û���Ϣ
	//1.1��ȡusers.txt�ļ�������ÿһ�����ݣ������Ϊһ��user����
	//1.2��ȡ������user�����ŵ�һ����̬������
	
	vector<User> allUser = datautils.getAllUsers();//�õ�allUsers������get�����Ѿ�ִ����read������ȡ��ȫ�����û���Ϣ
	//3.�ж��û����������Ƿ���ȷ
	vector<User>::iterator p = allUser.begin();//begin�����õ�����ͷ��ָ��
	for(User temp; p!=allUser.end(); p++)
	{
		temp = *p;

		if(username == temp.getUsername() && password == temp.getPassword())//���������û�����������ڴ��ļ��ж�ȡ���û��������룬���¼�ɹ�
		{
			id = temp.getId();
			type = temp.getType();
			return true;
		}
	}
	return false;
}

string User::getId()
{
	return id;
}
string User::getUsername()
{
	return username;
}
string User::getPassword()
{
	return password;
}
int User::getType()
{
	return type;
}

void User::setId(string t_id)
{
	id = t_id;
}
void User::setPassword(string t_password)
{
	password = t_password;
}
void User::setUsername(string t_username)
{
	username = t_username;
}
void User::setType(int t_type)
{
	type = t_type;
}
