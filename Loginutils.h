#pragma once
#include "loginMenuItem.h"
#include "loginuser.h"

class Utils
{
private:
	Utils(){};
	int mChoice;//ѡ������ʶ��
public:
	static Utils* getInstance();
	virtual ~Utils();
	void printMenu(vector<MenuItem>& items);//��¼����˵�
	int getChoice();//��ȡ�û���ѡ��
	void choice();//ѡ����
	void splitStr(string line,vector<string>& strs,string split);// ����split��line���в�֣����洢��strs��
	void printWellcom();//�ܻ�ӭ����
	void printWellcom(User& user);//�û���ӭ����
};
