#pragma once
#include "bookMenuItem.h"


class BookUtils
{
private:
	BookUtils(){};
	int mChoice;//ѡ������ʶ��
public:
	static BookUtils* getInstance();
	virtual ~BookUtils();
	void printMenu(vector<BookMenuItem>& items);//��¼����˵�
	int getChoice();//��ȡ�û���ѡ��
	void choice();//ѡ����
	void splitStr(string line,vector<string>& strs,string split);// ����split��line���в�֣����洢��strs��
// 	void printWellcom();//�ܻ�ӭ����
// 	void printWellcom(User& user);//�û���ӭ����
};
