// ͼ��ݹ���ϵͳ.cpp : �������̨Ӧ�ó������ڵ㡣
//
#pragma once
#include "stdafx.h"
#include "Hello.h"
#include<iostream>
#include "LibraryDate.h"
#include "LibraryUtils.h"
#include "Teacher.h"
#include "LibraryCard.h"
#include "libraryMenue.h"
#include <string>
#include "stdafx.h"
#include <iostream>
/**************************��½����ͷ�ļ�**************************************/
#include "loginutils.h"
#include "loginuser.h"
#include "logindatautils.h"
#include "Loginmenuitem.h"
#include <iostream>
/**************************��½����ͷ�ļ�**************************************/
/**************************ѧ������ͷ�ļ�**************************************/
#include "Student.h"
#include "StudentData.h"

/**************************ѧ������ͷ�ļ�**************************************/
/**************************ͼ�����ͷ�ļ�**************************************/
#include "bookutils.h"
#include "book.h"
#include "Bookdatautils.h"
/**************************ͼ�����ͷ�ļ�**************************************/
using namespace std;

/***********************************��½�ⲿ����*****************************************************/
Utils* utils = Utils::getInstance();

vector<MenuItem> guestMenu;
vector<MenuItem> adminMenu;
vector<MenuItem> studentMenu;
int choice;
User loginUser;

void initGuestMenu(vector<MenuItem>& guestMenu)
{
	MenuItem item1("1","��½ϵͳ");
	MenuItem item2("2","�˳�ϵͳ");
	guestMenu.push_back(item1);
	guestMenu.push_back(item2);
}

void initAdminMenu(vector<MenuItem>& adminMenu)
{
	adminMenu.push_back(MenuItem("11","����֤����"));
	adminMenu.push_back(MenuItem("12","ͼ�����"));
	adminMenu.push_back(MenuItem("13","�˳���½"));
}

void initStudentMenu(vector<MenuItem>& studentMenu)
{
	studentMenu.push_back(MenuItem("11","��ʾȫ��ͼ��"));
	studentMenu.push_back(MenuItem("12","ͼ���ѯ"));
	studentMenu.push_back(MenuItem("13","����ͼ��"));
	studentMenu.push_back(MenuItem("14","�˻�ͼ��"));
	studentMenu.push_back(MenuItem("15","�˳���¼"));
}


int  exitSystem()
{
	cout << "�˳�ϵͳ" << endl;
	return 0;
}


// void enterStudent()
// {
// 	utils->printWellcom(loginUser);
// 	initStudentMenu(studentMenu);
// 	bool flag = true;
// 	while (flag)
// 	{
// 		utils->printMenu(studentMenu);
// 		utils->choice();
		//��ѧ���˵���switch case����
		// 		switch(utils->getChoice())
		// 		{
		// 		case 1:
		// 			dataUtils->printAllUsers();//֮��ĳ�allbook��ȥ����һ����������ʽ������alluser����Ҫ�õ��ı���
		// 			break;
		// 		case 2:
		// 			{
		// 				cout << "������Ҫ��ѯ��ͼ��:" << endl;
		// 				string id;
		// 				cin >> id;
		// 				User u = dataUtils->getUser(id);
		// 				cout << "id:" << u.getId() << " | "
		// 					<< "username:" << u.getUsername() << " | "
		// 					<< "password:" << u.getPassword() << " | "
		// 					<< "type:" << u.getType() << endl;
		// 				break;
		// 			}
		// 		case 3:
		// 			cout << "����ͼ��" <<endl;
		// 			break;
		// 		case 4:
		// 			cout << "�˻�ͼ��" <<endl;
		// 			break;
		// 		case 5:
		// 			flag = false;
		// 			break;
		// 		default:
		// 			cout << "ϵͳ��֪������˵ʲô" <<endl;
		// 
		// 		}
//	}
//}

// void enterAdmin()
// {
// 	utils->printWellcom(loginUser);
// 	initAdminMenu(adminMenu);
// 	bool flag = true;
// 	while (flag)
// 	{
// 		utils->printMenu(adminMenu);
// 		utils->choice();
		//�Ź���Ա�˵���switch case����
		// 		switch(utils->getChoice())
		// 		{
		// 		case 1:
		// 			dataUtils->printAllUsers();
		// 			break;
		// 		case 2:
		// 			{
		// 				cout << "������Ҫ��ѯ��id:" << endl;
		// 				string id;
		// 				cin >> id;
		// 				User u = dataUtils->getUser(id);
		// 				cout << "id:" << u.getId() << " | "
		// 					<< "username:" << u.getUsername() << " | "
		// 					<< "password:" << u.getPassword() << " | "
		// 					<< "type:" << u.getType() << endl;
		// 				break;
		// 			}
		// 		case 3:
		// 			flag = false;
		// 			break;
		// 		default:
		// 			cout << "ϵͳ��֪������˵ʲô" << endl;
		// 		}
//	}
//}
void loginSystem()
{
	//2.���û������û���������
	cout << "�������û���:";
	string username;
	cin >> username;
	cout << "����������:";
	string password;
	cin >> password;
	loginUser.setUsername(username);
	loginUser.setPassword(password);

	bool ret = loginUser.login();
	if(ret) 
     {

	}

	
	else
	{
		cout << "�û���/�������" << endl;
	}
}
/***********************************��½�ⲿ����*****************************************************/

/*******************************����֤�����ⲿ����*************************************/
Hello hello;
Teacher teacher;
LibraryMenue librarymenue;
LibraryDate librarydate;
/*******************************����֤�����ⲿ����*************************************/
/***********************************ͼ�����ⲿ����*****************************************/

BookUtils* bookutils = BookUtils::getInstance();
BookDataUtils bookdatautils;
vector<MenuItem> bookMenu;
int bookchoice;



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
			bookdatautils.printAllBooks();
			break;
		case 2:
			{
				cout << "������Ҫ��ѯ��ͼ����:" << endl;
				string id;
				cin >> id;
				Book u = bookdatautils.getBook(id);
				cout << "id:" << u.getId() << " | "
					<< "bookname:" << u.getBookname() << endl;
				break;
			}
		case 3:
			{

				cout<<"������ͼ�����"<<endl;
				string id;
				cin>>id;
				cout << "������ͼ������"<<endl;
				string bookname;
				cin >> bookname;

				bookdatautils.addBook(id,bookname);
				break;
			}
		case 4:
			{
				cout << "������Ҫɾ����ͼ����:";
				string id;
				cin >> id;

				bookdatautils.delBook(id);
				break;
			}
		case 5:
			{
				cout << "������Ҫ�޸ĵ�ͼ����:";
				string id;
				cin >> id;

				cout << "������ͼ������:";
				string bookname;
				cin >> bookname;

				bookdatautils.modifyBook(id,bookname);
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

/***********************************ͼ�����ⲿ����*****************************************/
/*******************************ѧ�����ⲿ����*************************************/
string BookNumber;
Student student;
StudentData studentdata;
/*******************************ѧ�����ⲿ����*************************************/
int _tmain(int argc, _TCHAR* argv[])

{/*******************************************************��ӭ����********************************************/
	hello.BeginHello();
/********************************************************��½ϵͳ*********************************************/
	utils->printWellcom();
	initGuestMenu(guestMenu);
	utils->printMenu(guestMenu);
	utils->choice();
	switch(utils->getChoice())
	{
	case 1:
		loginSystem();
		
		
	/*cout<<"hello world"<<endl;*/

	//��½ϵͳ������
  	switch (loginUser.getType())
 	{
// 		/*****************************************ѧ��ϵͳ***********************************************/
 	case 1:
 		hello.StudentHello(); 
 		while (true)
 		   {
 			   
 			   switch(hello.StudentChoice())
 			   {
 
 			   
 			   case 1:
 				   cout<<"��������Ҫ�����ı��"<<endl;
 				 
 				   cin>>BookNumber;
 				   studentdata.ReadStudent();
 				  // �����û�
 				   studentdata.BorrrowBook(loginUser.getId(),BookNumber);//����
 				//   BorrowBOOkBookNumber
 				  // ����ϵͳ
 				   break;
 			   case 2:
 				   cout<<"������Ҫ�黹��ͼ����"<<endl;
 				   cin>>BookNumber;
 				   
 				   studentdata.ReturnBook(loginUser.getId(),BookNumber);
 				 //  ����ϵͳ
 				   break;
 			   case 3:
 				      
 					
 				   studentdata.printAllBorrowBook(loginUser.getId());//����ѧ����ѧ��
 				   break;
 				 //  ��ʾ�����ѽ�ͼ��
 			   case 4:
 				   break;
                 //   �˳�ϵͳ
 			   default:
 				   break;
 			   }
		}
// 
// 
// 			   

// 		
// 		
// 		
// 		
// 		
// 		
// 		
// 		
// 		
// 		
// 		
// 		break;
// 	/***********************************************��¼����������*******************************/
// 	
// 	/***********************************************��¼����������*******************************/
 	case 2: hello.TeacherHello();
 			teacher.PrintChoiceMenue();
 			while (true)
			{
 	         switch (teacher.GetTeacherChoice())//ͼ�����Աѡ�����֤����ͼ���������˳�
 			{
// /********************************************************����֤����*******************************************/
// 			
// 			
 			
 			case 1: 
 				while(true)
 {			hello.BorrowBookHello();
 			
 
 			
 			
 
 			librarymenue.PrintLibraryMenue();
 			switch (librarymenue.GetMyChoice())
 	{		case 1: 
 		{ 
// 		          //��ʾȫ��ͼ�����֤  
 			librarydate.ReadLibraryCard();
 			librarydate.PrintAllLibraryCard();
			/*vector<LibraryCard>::iterator p=librarydate.GetAllLibraryCard().begin();

			for (LibraryCard l;p!=librarydate.GetAllLibraryCard().end();p++)
			{      

			l=*p;
			cout<<"Name="<<l.GetName()<<" "<<"NameNumbber="<<l.GetNameNumber()<<" "<<"Sex="<<l.GetSex()<<" "<<"BorrowBook="<<l.GetBorrowBook()<<" "<<"ReturnBook="<<l.GetReturnBook()<<endl;

			}*/
 			
 		}
 		
 
 			
 			
 			break;
 			case 2 :
// 			//���Ľ���֤
// 				
 				librarydate.ReadLibraryCard();
 				librarydate.GetLibraryCard(hello.LibraryLookUpChoice());
 				librarydate.printLibraryCard();
 				
 				
 				break;
 			case 3:
 				{
 					cout<<"��������Ҫ���ӵĽ���֤������"<<endl;
 					string name;
 					cin>>name;
 					cout<<"��������Ҫ���ӵĽ���֤��ѧ��"<<endl;
 					string number;
 					cin>>number;
 					cout<<"��������Ҫ���ӵĽ���֤���Ա�"<<endl;
 					string sex;
 					cin>>sex;
 					librarydate.addLibraryCard(name,number,sex);
 				}
// 				//����ѧ������֤
 				break;
 			
 			case 4 :
 				{
 					cout<<"��������Ҫɾ���Ľ���֤�ı��"<<endl;
 					string number;
 					cin>>number;
 					librarydate.dellibrary(number);
 				}
 			//ɾ������֤
 				break;
 			case 5:
 				{ cout<<"��������Ҫ�޸ĵĽ���֤������"<<endl;
 				string name;
 				cin>>name;
 				cout<<"��������Ҫ�޸ĵĽ���֤��ѧ��"<<endl;
 				string number;
 				cin>>number;
 				cout<<"��������Ҫ�޸ĵĽ���֤���Ա�"<<endl;
 				string sex;
 				cin>>sex;
 				librarydate.modifyUser(name,number,sex);
 				}
 				//�޸Ľ���֤
 			case 6:
 				//������һ��
 				break;
 			
 				break;
 
 			default:cout<<"�������������1-7֮�������"<<endl;
 				
 				break;
 		}
 
 }					
 			
 			
 			
 			break;
// 
// /******************************************************ͼ�����ϵͳ******************************************************/
 			case 2:
 			hello.BookHello();
 			enterBooks();
 				//ͼ�����ϵͳ
 						
 				break;
 
 			default:
 
 				hello.EndHello();//�˳�ϵͳ
 				break;
 			}		
 		break;
 		default: break;
 	}
 
}
	break;
	case 2:
		exitSystem();
		break;
	default:
		cout << "���ǲ�֪������˵ʲô" << endl;
	}
}


