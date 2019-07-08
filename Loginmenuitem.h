#pragma once
#include <vector>
#include <string>

using namespace std;

class MenuItem
{
private:
	string id;
	string text;
	vector<MenuItem> childItems;
public:
	MenuItem();
	MenuItem(string t_id ,string t_text):id(t_id),text(t_text){};
	virtual ~MenuItem();
	string getId();
	string getText();
	//vector<MenuItem>& ���������ص���һ��vector<MenuItem>�������ݵ�����
	vector<MenuItem>& getChildItems();
};
