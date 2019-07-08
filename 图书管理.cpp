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
	bookMenu.push_back(MenuItem("1","��ѯȫ��ͼ��"));
	bookMenu.push_back(MenuItem("2","��ѯָ��ͼ��"));
	bookMenu.push_back(MenuItem("3","���ͼ��"));
	bookMenu.push_back(MenuItem("4","ɾ��ͼ��"));
	bookMenu.push_back(MenuItem("5","�޸�ͼ��"));
	bookMenu.push_back(MenuItem("6","����"));
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
				cout << "������Ҫ��ѯ��ͼ����:" << endl;
				int id;
				cin >> id;
				Book u = bookdatautils->getBook(id);
				cout << "id:" << u.getId() << " | "
					<< "bookname:" << u.getBookname() << endl;
				break;
			}
		case 3:
			{
				cout << "������ͼ������:";
				string bookname;
				cin >> bookname;

				bookdatautils->addBook(bookname);
				break;
			}
		case 4:
			{
				cout << "������Ҫɾ����ͼ����:";
				int id;
				cin >> id;

				bookdatautils->delBook(id);
				break;
			}
		case 5:
			{
				cout << "������Ҫ�޸ĵ�ͼ����:";
				int id;
				cin >> id;

				cout << "������ͼ������:";
				string bookname;
				cin >> bookname;

				bookdatautils->modifyBook(id,bookname);
				break;
			}
		case 6:
			flag = false;
			break;
		default:
			cout << "�Ҳ���������˵ʲô" << endl;
		}
	}
}

int main(int argc, char* argv[])
{
	enterBooks();

}
