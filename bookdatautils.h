#pragma once
#include "book.h"
#include <vector>

class BookDataUtils
{
private:
	vector<Book> allBooks;//存放所有的图书信息
	Book book;//存放一个图书信息
	
	string last_id;
public:
	BookDataUtils(){};
	
	virtual ~BookDataUtils();
	//1.获取allUsers对象
	vector<Book>& getAllBooks();
	//2.获取temp对象
	Book& getBook(string id);
	//3.从文件读取数据，将其更新到allUsers中
	void readAllBooks();
	//4.将allUsers写入到文件中
	void saveAllBooks();
	//5.增加
	void addBook(string last_id,string bookname);
	//6.删除
	void delBook(string id);
	//7.修改
	void modifyBook(string id,string bookname);

	void printAllBooks();
};