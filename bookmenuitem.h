#pragma once
#include <vector>
#include <string>

using namespace std;

class BookMenuItem
{
private:
	string id;
	string text;
	vector<BookMenuItem> childItems;
public:
	BookMenuItem();
	BookMenuItem(string t_id ,string t_text):id(t_id),text(t_text){};
	virtual ~BookMenuItem();
	string getId();
	string getText();
	//vector<MenuItem>& ：函数返回的是一个vector<MenuItem>类型数据的引用
	vector<BookMenuItem>& getChildItems();
};
