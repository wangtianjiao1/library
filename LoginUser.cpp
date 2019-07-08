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
		result = "图书管理员账号";
		break;
	case 1:
		result = "学生账号";
		break;
	}
	return result;
}

bool User::login()
{
	DataUtils datautils;
	//1.获取全部的用户信息
	//1.1读取users.txt文件，解析每一行数据，将其变为一个user对象
	//1.2读取出来的user对象存放到一个动态数组中
	
	vector<User> allUser = datautils.getAllUsers();//拿到allUsers的引用get函数已经执行了read函数获取了全部的用户信息
	//3.判断用户名和密码是否正确
	vector<User>::iterator p = allUser.begin();//begin函数得到数组头的指针
	for(User temp; p!=allUser.end(); p++)
	{
		temp = *p;

		if(username == temp.getUsername() && password == temp.getPassword())//如果输入的用户名和密码等于从文件中读取的用户名和密码，则登录成功
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
