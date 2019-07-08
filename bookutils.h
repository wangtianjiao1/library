#pragma once
#include "bookMenuItem.h"


class BookUtils
{
private:
	BookUtils(){};
	int mChoice;//选择函数标识符
public:
	static BookUtils* getInstance();
	virtual ~BookUtils();
	void printMenu(vector<BookMenuItem>& items);//登录界面菜单
	int getChoice();//获取用户的选择
	void choice();//选择函数
	void splitStr(string line,vector<string>& strs,string split);// 根据split将line进行拆分，并存储到strs中
// 	void printWellcom();//总欢迎界面
// 	void printWellcom(User& user);//用户欢迎界面
};
