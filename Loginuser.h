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
	string getTypeName();//��ȡ��ͬ������������
	bool login();//���ڻ�ȡȫ���û���Ϣ���������ݣ�����ȡ��user�����ŵ�һ����̬�����У������ж��û����������Ƿ���ȷ
	string getId();//��ȡid
	string getUsername();//��ȡ�û���
	string getPassword();//��ȡ����
	int getType();//��ȡ��������

	void setId(string t_id);//���id
	void setUsername(string t_username);//����û���
	void setPassword(string t_password);//�������
	void setType(int t_type);//�����������
};