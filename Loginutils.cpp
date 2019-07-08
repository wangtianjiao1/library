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
	cout << "   ��ӭʹ���人�Ṥ��ѧͼ�����ϵͳ   " << endl;
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
	//vector<MenuItem>::iterator-->��һ��MenuItem��ָ������
	//items.begin()-->�õ��ü����е�һ��Ԫ�ص�ָ��
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
	cout << "��ѡ��:";
	cin >> mChoice;
}

void Utils::splitStr(string line,vector<string>& strs,string split)
{
	int pos1 = 0;
	int pos2 = 0;
	pos2 = line.find(/*��ʲô�ַ�*/split);
	while(pos2 != string::npos)
	{
		strs.push_back(line.substr(/*�����￪ʼ*/pos1,/*��ȡ�೤*/pos2 - pos1));
		pos1 = pos2 + split.length();
		pos2 = line.find(/*��ʲô�ַ�*/split,pos1);
	}
	if(pos1 < line.size())
	{
		strs.push_back(line.substr(pos1));
	}

}
