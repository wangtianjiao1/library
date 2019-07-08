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
	//vector<MenuItem>& ���������ص���һ��vector<MenuItem>�������ݵ�����
	vector<BookMenuItem>& getChildItems();
};
