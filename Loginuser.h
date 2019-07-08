#pragma once
#include <string>

using namespace std;

class User
{
private:
	string id;
	string username;
	string password;
	int type;
public:
	User();
	virtual ~User();
	string getTypeName();//获取不同数据类型名称
	bool login();//用于获取全部用户信息，解析数据，将读取的user对象存放到一个动态数组中，并且判断用户名和密码是否正确
	string getId();//获取id
	string getUsername();//获取用户名
	string getPassword();//获取密码
	int getType();//获取数据类型

	void setId(string t_id);//存放id
	void setUsername(string t_username);//存放用户名
	void setPassword(string t_password);//存放密码
	void setType(int t_type);//存放数据类型
};