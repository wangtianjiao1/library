#pragma once
#include "StdAfx.h"
#include <iostream>
#include "bookutils.h"

using namespace std;

BookUtils::~BookUtils()
{

}

BookUtils* BookUtils::getInstance()
{
	static BookUtils instance;
	return& instance;
}

// void Utils::printWellcom()
// {
// 	cout << "--------------------------------------" << endl;
// 	cout << "   ��ӭʹ���人�Ṥ��ѧͼ�����ϵͳ   " << endl;
// 	cout << "--------------------------------------" << endl;
// }
// 
// void Utils::printWellcom(User& user)
// {
// 	cout << "--------------------------------" << endl;
// 	cout << user.getUsername() << "[" << user.getTypeName() << "]" <<endl;
// 	cout << "--------------------------------" << endl;
// }

void BookUtils::printMenu(vector<BookMenuItem>& items)
{
	//vector<MenuItem>::iterator-->��һ��MenuItem��ָ������
	//items.begin()-->�õ��ü����е�һ��Ԫ�ص�ָ��
	vector<BookMenuItem>::iterator p = items.begin();
	for (int i=0; i<items.size(); i++)
	{
		BookMenuItem temp = *p;
		cout << "-->" << (i+1) << "." << temp.getText() << endl;
		p++;
	}

}

int BookUtils::getChoice()
{
	return mChoice;
}

void BookUtils::choice()
{	
	cout << "��ѡ��:";
	cin >> mChoice;
}

void BookUtils::splitStr(string line,vector<string>& strs,string split)
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
