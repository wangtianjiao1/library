#pragma once
#include "Student.h"
#include <vector>
#include <iostream>
#include "book.h"
using namespace  std;
class StudentData
{
private: 
	 vector<Student> AllStudent;
	 Student student;

	vector<Book> allBooks1;//存放所有的图书信息
	Book book1;//存放一个图书信息

	
public:
	/********************************************/
	//1.获取allUsers对象
	vector<Book>& getAllBooks1();
	//2.获取temp对象
	Book& getBook1(string id);
	//3.从文件读取数据，将其更新到allUsers中
	void readAllBooks1();
	//4.将allUsers写入到文件中
	void saveAllBooks1();
	void printAllBooks1();
	//5.增加
	/********************************************/
	


	
		StudentData();
		
		void ReadStudent();//读取文本
		Student& GetStudent(string NameNumber);
		vector<Student>& GetAllStudent();//得到所有学生
		
		//void GetLiBraryCard();//得到一个LibraryCard.
	//	void printLibraryCard(string number);
		
	   void SaveAllStudent();//保存所有学生的数据

		
	    void ReturnBook(string id,string number);//规划书本，number归还书本的编号
		void BorrrowBook(string number,string b1);//借书的编号
		void printAllBorrowBook(string number);//打印所有改学生已借图书的名称
};