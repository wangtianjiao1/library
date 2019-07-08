#pragma once
#include "loginuser.h"
#include <vector>

class DataUtils
{
private:
	
	vector<User> allUsers;//存放所有的用户信息。在此处定义的allUsers
	User user;//存放一个用户信息
public:
	DataUtils(){};
	
	virtual ~DataUtils();
	//1.获取allUsers对象
	vector<User>& getAllUsers();
	//2.获取temp对象
	User& getUser(string id);
	//3.从文件读取数据，将其更新到allUsers中
	void readAllUsers();

};