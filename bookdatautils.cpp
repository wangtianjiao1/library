#pragma once
#include "StdAfx.h"
#include "bookdatautils.h"
#include "bookutils.h"
#include <fstream>
#include <iostream>

BookDataUtils::~BookDataUtils(){}



void BookDataUtils::readAllBooks()
{
	allBooks.clear();
	BookUtils* bookutils=BookUtils::getInstance();
	ifstream infile("./data/books.txt",ios::in);
	if(infile.is_open())
	{
		string line;
		while(getline(infile,line))
		{
			vector<string> datas;
			bookutils->splitStr(line,datas," ");
			//将datas匹配成一个user对象
			vector<string>::iterator p = datas.begin();
			string id=*p;
			p++;
			string bookname = *p;
			p++;
			Book temp;
			temp.setId(id);

			temp.setBookname(bookname);

			//把user对象放到allUsers中
			allBooks.push_back(temp);
			last_id = temp.getId();
		}
		infile.close();
	}
	else
	{
		cout << "文件打开失败" << endl;
	}
}
void BookDataUtils::saveAllBooks()
{
	ofstream outfile("./data/books.txt",ios::out);
	if(outfile.is_open())
	{
		vector<Book>::iterator p = allBooks.begin();
		for(; p!=allBooks.end();p++)
		{
			outfile << p->getId() << " ";
			outfile << p->getBookname() << endl;


		}
		outfile.close();
		readAllBooks();
	}
	else
	{
		cout << "文件打开失败" << endl;
	}

}
vector<Book>& BookDataUtils::getAllBooks()
{
	readAllBooks();
	return allBooks;
}
Book& BookDataUtils::getBook(string id)
{
	readAllBooks();
	vector<Book>::iterator p = allBooks.begin();
	for(Book u; p!=allBooks.end();p++)
	{
		u = *p;
		if(u.getId() == id)
		{
			book.setId(u.getId());
			book.setBookname(u.getBookname());
			return book;
		}
	}
	cout << "该id的用户不存在" << endl;
	return book;
}
void BookDataUtils::addBook(string last_id,string bookname)
{
	
	Book book;
	book.setId(last_id);
	book.setBookname(bookname);

	allBooks.push_back(book);
	saveAllBooks();
}
void BookDataUtils::delBook(string id)
{
	vector<Book>::iterator p = allBooks.begin();
	for( ;p!=allBooks.end();p++)
	{
		if(p->getId() == id)
		{
			allBooks.erase(p);
			saveAllBooks();
			return;
		}
	}
}
void BookDataUtils::modifyBook(string id,string bookname)
{
	vector<Book>::iterator p = allBooks.begin();
	for( ;p!=allBooks.end();p++)
	{
		if(p->getId() == id)
		{
			p->setBookname(bookname);

			saveAllBooks();
			return;
		}
	}
}
void BookDataUtils::printAllBooks()
{
	readAllBooks();
	vector<Book>::iterator p = allBooks.begin();
	for(Book u; p!=allBooks.end();p++)
	{
		u =* p;
		cout << "id:" << u.getId() << " | "
			<< "bookname:" << u.getBookname() << endl;

	}
}