// 图书馆管理系统.cpp : 定义控制台应用程序的入口点。
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
/**************************登陆界面头文件**************************************/
#include "loginutils.h"
#include "loginuser.h"
#include "logindatautils.h"
#include "Loginmenuitem.h"
#include <iostream>
/**************************登陆界面头文件**************************************/
/**************************学生界面头文件**************************************/
#include "Student.h"
#include "StudentData.h"

/**************************学生界面头文件**************************************/
/**************************图书界面头文件**************************************/
#include "bookutils.h"
#include "book.h"
#include "Bookdatautils.h"
/**************************图书界面头文件**************************************/
using namespace std;

/***********************************登陆外部定义*****************************************************/
Utils* utils = Utils::getInstance();

vector<MenuItem> guestMenu;
vector<MenuItem> adminMenu;
vector<MenuItem> studentMenu;
int choice;
User loginUser;

void initGuestMenu(vector<MenuItem>& guestMenu)
{
	MenuItem item1("1","登陆系统");
	MenuItem item2("2","退出系统");
	guestMenu.push_back(item1);
	guestMenu.push_back(item2);
}

void initAdminMenu(vector<MenuItem>& adminMenu)
{
	adminMenu.push_back(MenuItem("11","借阅证管理"));
	adminMenu.push_back(MenuItem("12","图书管理"));
	adminMenu.push_back(MenuItem("13","退出登陆"));
}

void initStudentMenu(vector<MenuItem>& studentMenu)
{
	studentMenu.push_back(MenuItem("11","显示全部图书"));
	studentMenu.push_back(MenuItem("12","图书查询"));
	studentMenu.push_back(MenuItem("13","借阅图书"));
	studentMenu.push_back(MenuItem("14","退还图书"));
	studentMenu.push_back(MenuItem("15","退出登录"));
}


int  exitSystem()
{
	cout << "退出系统" << endl;
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
		//放学生菜单的switch case函数
		// 		switch(utils->getChoice())
		// 		{
		// 		case 1:
		// 			dataUtils->printAllUsers();//之后改成allbook，去建立一个函数，形式类似于alluser，需要用到文本；
		// 			break;
		// 		case 2:
		// 			{
		// 				cout << "请输入要查询的图书:" << endl;
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
		// 			cout << "借阅图书" <<endl;
		// 			break;
		// 		case 4:
		// 			cout << "退还图书" <<endl;
		// 			break;
		// 		case 5:
		// 			flag = false;
		// 			break;
		// 		default:
		// 			cout << "系统不知道你在说什么" <<endl;
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
		//放管理员菜单的switch case函数
		// 		switch(utils->getChoice())
		// 		{
		// 		case 1:
		// 			dataUtils->printAllUsers();
		// 			break;
		// 		case 2:
		// 			{
		// 				cout << "请输入要查询的id:" << endl;
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
		// 			cout << "系统不知道你在说什么" << endl;
		// 		}
//	}
//}
void loginSystem()
{
	//2.让用户输入用户名和密码
	cout << "请输入用户名:";
	string username;
	cin >> username;
	cout << "请输入密码:";
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
		cout << "用户名/密码错误" << endl;
	}
}
/***********************************登陆外部定义*****************************************************/

/*******************************借阅证管理外部定义*************************************/
Hello hello;
Teacher teacher;
LibraryMenue librarymenue;
LibraryDate librarydate;
/*******************************借阅证管理外部定义*************************************/
/***********************************图书类外部定义*****************************************/

BookUtils* bookutils = BookUtils::getInstance();
BookDataUtils bookdatautils;
vector<MenuItem> bookMenu;
int bookchoice;



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
			bookdatautils.printAllBooks();
			break;
		case 2:
			{
				cout << "请输入要查询的图书编号:" << endl;
				string id;
				cin >> id;
				Book u = bookdatautils.getBook(id);
				cout << "id:" << u.getId() << " | "
					<< "bookname:" << u.getBookname() << endl;
				break;
			}
		case 3:
			{

				cout<<"请输入图书书号"<<endl;
				string id;
				cin>>id;
				cout << "请输入图书名称"<<endl;
				string bookname;
				cin >> bookname;

				bookdatautils.addBook(id,bookname);
				break;
			}
		case 4:
			{
				cout << "请输入要删除的图书编号:";
				string id;
				cin >> id;

				bookdatautils.delBook(id);
				break;
			}
		case 5:
			{
				cout << "请输入要修改的图书编号:";
				string id;
				cin >> id;

				cout << "请输入图书名称:";
				string bookname;
				cin >> bookname;

				bookdatautils.modifyBook(id,bookname);
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

/***********************************图书类外部定义*****************************************/
/*******************************学生类外部定义*************************************/
string BookNumber;
Student student;
StudentData studentdata;
/*******************************学生类外部定义*************************************/
int _tmain(int argc, _TCHAR* argv[])

{/*******************************************************欢迎界面********************************************/
	hello.BeginHello();
/********************************************************登陆系统*********************************************/
	utils->printWellcom();
	initGuestMenu(guestMenu);
	utils->printMenu(guestMenu);
	utils->choice();
	switch(utils->getChoice())
	{
	case 1:
		loginSystem();
		
		
	/*cout<<"hello world"<<endl;*/

	//登陆系统（）；
  	switch (loginUser.getType())
 	{
// 		/*****************************************学生系统***********************************************/
 	case 1:
 		hello.StudentHello(); 
 		while (true)
 		   {
 			   
 			   switch(hello.StudentChoice())
 			   {
 
 			   
 			   case 1:
 				   cout<<"请输入需要借的书的编号"<<endl;
 				 
 				   cin>>BookNumber;
 				   studentdata.ReadStudent();
 				  // 查找用户
 				   studentdata.BorrrowBook(loginUser.getId(),BookNumber);//借书
 				//   BorrowBOOkBookNumber
 				  // 借书系统
 				   break;
 			   case 2:
 				   cout<<"请输入要归还的图书编号"<<endl;
 				   cin>>BookNumber;
 				   
 				   studentdata.ReturnBook(loginUser.getId(),BookNumber);
 				 //  还书系统
 				   break;
 			   case 3:
 				      
 					
 				   studentdata.printAllBorrowBook(loginUser.getId());//输入学生的学号
 				   break;
 				 //  显示所有已借图书
 			   case 4:
 				   break;
                 //   退出系统
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
// 	/***********************************************登录界面主函数*******************************/
// 	
// 	/***********************************************登录界面主函数*******************************/
 	case 2: hello.TeacherHello();
 			teacher.PrintChoiceMenue();
 			while (true)
			{
 	         switch (teacher.GetTeacherChoice())//图书管理员选择借阅证或者图书管理或者退出
 			{
// /********************************************************借阅证管理*******************************************/
// 			
// 			
 			
 			case 1: 
 				while(true)
 {			hello.BorrowBookHello();
 			
 
 			
 			
 
 			librarymenue.PrintLibraryMenue();
 			switch (librarymenue.GetMyChoice())
 	{		case 1: 
 		{ 
// 		          //显示全部图书借阅证  
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
// 			//查阅借阅证
// 				
 				librarydate.ReadLibraryCard();
 				librarydate.GetLibraryCard(hello.LibraryLookUpChoice());
 				librarydate.printLibraryCard();
 				
 				
 				break;
 			case 3:
 				{
 					cout<<"请输入需要增加的借阅证的名字"<<endl;
 					string name;
 					cin>>name;
 					cout<<"请输入需要增加的借阅证的学号"<<endl;
 					string number;
 					cin>>number;
 					cout<<"请输入需要增加的借阅证的性别"<<endl;
 					string sex;
 					cin>>sex;
 					librarydate.addLibraryCard(name,number,sex);
 				}
// 				//增添学生借阅证
 				break;
 			
 			case 4 :
 				{
 					cout<<"请输入需要删除的借阅证的编号"<<endl;
 					string number;
 					cin>>number;
 					librarydate.dellibrary(number);
 				}
 			//删除借阅证
 				break;
 			case 5:
 				{ cout<<"请输入需要修改的借阅证的名字"<<endl;
 				string name;
 				cin>>name;
 				cout<<"请输入需要修改的借阅证的学号"<<endl;
 				string number;
 				cin>>number;
 				cout<<"请输入需要修改的借阅证的性别"<<endl;
 				string sex;
 				cin>>sex;
 				librarydate.modifyUser(name,number,sex);
 				}
 				//修改借阅证
 			case 6:
 				//返回上一级
 				break;
 			
 				break;
 
 			default:cout<<"输入错误，请输入1-7之间的整数"<<endl;
 				
 				break;
 		}
 
 }					
 			
 			
 			
 			break;
// 
// /******************************************************图书馆里系统******************************************************/
 			case 2:
 			hello.BookHello();
 			enterBooks();
 				//图书馆里系统
 						
 				break;
 
 			default:
 
 				hello.EndHello();//退出系统
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
		cout << "我们不知道你在说什么" << endl;
	}
}


