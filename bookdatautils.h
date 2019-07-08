#pragma once
#include "book.h"
#include <vector>

class BookDataUtils
{
private:
	vector<Book> allBooks;//������е�ͼ����Ϣ
	Book book;//���һ��ͼ����Ϣ
	
	string last_id;
public:
	BookDataUtils(){};
	
	virtual ~BookDataUtils();
	//1.��ȡallUsers����
	vector<Book>& getAllBooks();
	//2.��ȡtemp����
	Book& getBook(string id);
	//3.���ļ���ȡ���ݣ�������µ�allUsers��
	void readAllBooks();
	//4.��allUsersд�뵽�ļ���
	void saveAllBooks();
	//5.����
	void addBook(string last_id,string bookname);
	//6.ɾ��
	void delBook(string id);
	//7.�޸�
	void modifyBook(string id,string bookname);

	void printAllBooks();
};