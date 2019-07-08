#pragma once
#include <string>

using namespace std;

class Book
{
private:
	string id;
	string bookname;
public:
	Book();
	virtual ~Book();
	string  getId();
	string getBookname();
	void setId(string t_id);
	void setBookname(string t_bookname);
};
