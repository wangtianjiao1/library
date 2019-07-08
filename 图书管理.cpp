#pragma once
#include "stdafx.h"
#include <iostream>
#include "bookutils.h"
#include "book.h"
#include "Bookdatautils.h"

using namespace std;



Utils* utils = Utils::getInstance();
BookDataUtils *bookdatautils = BookDataUtils::getInstance();
vector<MenuItem> bookMenu;
int choice;



void initBookMenu(vector<MenuItem>& bookMenu)
{
	bookMenu.push_back(MenuItem("1","查询全部图书"));
	bookMenu.push_back(MenuItem("2","查询指定图书"));
	bookMenu.push_back(MenuItem("3","添加图书"));
	bookMenu.push_back(MenuItem("4","删除图书"));
	bookMenu.push_back(MenuItem("5","修改图书"));
	bookMenu.push_back(MenuItem("6","返回"));
}

void enterBooks()
{
	initBookMenu(bookMenu);
	bool flag = true;
	while(flag)
	{
		utils->printMenu(bookMenu);
		utils->choice();
		switch(utils->getChoice())
		{
		case 1:
			bookdatautils->printAllBooks();
			break;
		case 2:
			{
				cout << "请输入要查询的图书编号:" << endl;
				int id;
				cin >> id;
				Book u = bookdatautils->getBook(id);
				cout << "id:" << u.getId() << " | "
					<< "bookname:" << u.getBookname() << endl;
				break;
			}
		case 3:
			{
				cout << "请输入图书名称:";
				string bookname;
				cin >> bookname;

				bookdatautils->addBook(bookname);
				break;
			}
		case 4:
			{
				cout << "请输入要删除的图书编号:";
				int id;
				cin >> id;

				bookdatautils->delBook(id);
				break;
			}
		case 5:
			{
				cout << "请输入要修改的图书编号:";
				int id;
				cin >> id;

				cout << "请输入图书名称:";
				string bookname;
				cin >> bookname;

				bookdatautils->modifyBook(id,bookname);
				break;
			}
		case 6:
			flag = false;
			break;
		default:
			cout << "我不明白你在说什么" << endl;
		}
	}
}

int main(int argc, char* argv[])
{
	enterBooks();

}
