#pragma once
#include "loginuser.h"
#include <vector>

class DataUtils
{
private:
	
	vector<User> allUsers;//������е��û���Ϣ���ڴ˴������allUsers
	User user;//���һ���û���Ϣ
public:
	DataUtils(){};
	
	virtual ~DataUtils();
	//1.��ȡallUsers����
	vector<User>& getAllUsers();
	//2.��ȡtemp����
	User& getUser(string id);
	//3.���ļ���ȡ���ݣ�������µ�allUsers��
	void readAllUsers();

};