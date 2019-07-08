#pragma once
#include "stdafx.h"
#include "book.h"
#include "bookdatautils.h"
#include <iostream>
#include "Student.h"
#include "StudentData.h"
#include "LibraryUtils.h"
#include <fstream>
#include <vector>
#include "StdAfx.h"
#include "bookdatautils.h"
#include "bookutils.h"

BookDataUtils bookdatautils1;
StudentData::StudentData(){}
void StudentData::BorrrowBook(string number,string b1)
{     
	readAllBooks1();
	ReadStudent();
	int i1=0;
	int i2=0;
	int i3=0;
	int i4=0;
	int i5=0;
	vector<Book>::iterator p=allBooks1.begin();
	vector<Student>::iterator s=AllStudent.begin();
	
	for (;s!=AllStudent.end();s++)
	{
		if (number==s->getStudentNumber())
		{
			break;
		}
	}
	//*****************************找到Student.
	
	for ( p=allBooks1.begin();p!=allBooks1.end();p++)
	{    
		
		if (s->getb1()==p->getId())
		{   
		    break;
		}
		i1++;

	}
	
	//1
	for (p=allBooks1.begin();p!=allBooks1.end();p++)
	{
		if (s->getb2()==p->getId())
		{
			break;
		}
		i2++;
		

	}//2
	for (p=allBooks1.begin();p!=allBooks1.end();p++)
	{
		if (s->getb1()==p->getId())
		{
			break;
		}
		i3++;
	}//3
	for (p=allBooks1.begin();p!=allBooks1.end();p++)
	{
		if (s->getb4()==p->getId())
		{
			break;
		}
		i4++;

	}//4
	for (p=allBooks1.begin();p!=allBooks1.end();p++)
	{
		if (s->getb5()==p->getId())
		{
			break;
		}
		i5++;

	}//5

	if (i1==allBooks1.size())
	{
		
		s->Setb1(b1);
		cout<<"s->Setb1(b1);"<<s->getb1();
		SaveAllStudent();
		return;
	}
	if (i2==allBooks1.size())
	{
		s->Setb2(b1);
		SaveAllStudent();
		return;
	}
	if (i3==allBooks1.size())
	{
		s->Setb3(b1);
		SaveAllStudent();
		return;
	}
	if (i4==allBooks1.size())
	{
		s->Setb4(b1);
		SaveAllStudent();
		return;
	}
	if (i5==allBooks1.size())
	{
		s->Setb5(b1);
		SaveAllStudent();
		return;
	}

}
Student& StudentData::GetStudent(string number )
{
	vector<Student> ::iterator p=AllStudent.begin();
	for (Student s;p!=AllStudent.end();p++)
	{
		s=*p;
		if (s.getStudentNumber()==number)
		{
			/*student.SetStudentNumber(s.getStudentNumber());*/
			student.Setb1(s.getb1());
			student.Setb2(s.getb2());
			student.Setb3(s.getb3());
			student.Setb4(s.getb4());
			student.Setb5(s.getb5());
			return student;	
		}
	}
	

}
void StudentData::ReturnBook(string id,string number)
{
	cout<<"1ok"<<endl;
    ReadStudent();//先进行读取文本
   
	GetStudent(id);//得到一个Student
	string number1="1";//
	vector<Student>::iterator a=AllStudent.begin();
	for (;a!=AllStudent.end();a++)
	{
		if (a->getStudentNumber()==id&&a->getb1()==number)
		{
			a->Setb1(number1);
			SaveAllStudent();
		}
		if (a->getStudentNumber()==id&&a->getb2()==number)
		{
			a->Setb2(number1);
			SaveAllStudent();
		}
		if (a->getStudentNumber()==id&&a->getb3()==number)
		{
			a->Setb3(number1);
			SaveAllStudent();
		}
		if (a->getStudentNumber()==id&&a->getb4()==number)
		{
			a->Setb4(number1);
			SaveAllStudent();
		}
		if (a->getStudentNumber()==id&&a->getb5()==number)
		{
			a->Setb5(number1);
			SaveAllStudent();
		}
	}


	//b1
	
}//b5

 void StudentData::ReadStudent()
 {      AllStudent.clear();
	 LibraryUtils libraryutils;
	 ifstream infile("./data/Student.txt",ios::in);

	 if(infile.is_open())
	 {
		 string line;
		 while(getline(infile,line))
		 {
			 vector<string> datas;
			 libraryutils.SplitStr(line,datas," ");

			 vector<string>::iterator p = datas.begin();
			 string name = *p;
			 p++;
			 string NameNumber = *p;
			 p++;
			 string b1 = *p;
			 p++;
			 string b2 = *p;
			 p++;
			 string b3 = *p;
			 p++;
			 string b4 = *p;
			 p++;
			 string b5=*p;
			 Student temp;
			 temp.SetStudentName(name);
			 temp.SetStudentNumber(NameNumber);
			 temp.Setb1(b1);
			 temp.Setb2(b2);
			 temp.Setb3(b3);
			 temp.Setb4(b4);
			 temp.Setb5(b5);
			 AllStudent.push_back(temp);
		 }
		 infile.close();

	 }
	 else
	 {
		 cout<<"文件打开失败"<<endl;
	 }

 }
 void StudentData::SaveAllStudent()
 {

	 ofstream outfile("./data/Student.txt",ios::out);
	 if(outfile.is_open())
	 {
		 vector<Student>::iterator p = AllStudent.begin();
		 for(; p!=AllStudent.end();p++)
		 {
			 outfile << p->getStudentName() << " ";
			 outfile << p->getStudentNumber() << " ";
			 outfile << p->getb1()<<" ";
		     outfile << p->getb2()<<" ";
		     outfile << p->getb3()<<" ";
		     outfile << p->getb4()<<" ";
			 outfile<<p->getb5()<<endl;
		

		 }
		 outfile.close();
		ReadStudent();
	 }
	 else
	 {
		 cout << "文件打开失败" << endl;
	 }
 }
 void StudentData::printAllBorrowBook(string number)
 {   ReadStudent();
     readAllBooks1();
	
	  
	 vector<Student>::iterator p1=AllStudent.begin();
	 for (;p1!=AllStudent.end();p1++)
	 {
		 if (p1->getStudentNumber()== number)
		 {
			 break;
		 }
	 }
	 
	 vector<Book>::iterator p2=allBooks1.begin();
	 for (;p2!=allBooks1.end();p2++)
	 {
		 if (p1->getb1()==p2->getId())
		 {
			 cout<<p2->getBookname()<<endl;
		 }
		 if (p1->getb2()==p2->getId())
		 {
			 cout<<p2->getBookname()<<endl;
		 }
		 if (p1->getb3()==p2->getId())
		 {
			 cout<<p2->getBookname()<<endl;
		 }
		 if (p1->getb4()==p2->getId())
		 {
			 cout<<p2->getBookname()<<endl;
		 }
		 if (p1->getb5()==p2->getId())
		 {
			 cout<<p2->getBookname()<<endl;
		 }
	 }
 }
 /****************************************************/
 void StudentData::readAllBooks1()
 {
	 allBooks1.clear();
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
			 allBooks1.push_back(temp);
			
		 }
		 infile.close();
	 }
	 else
	 {
		 cout << "文件打开失败" << endl;
	 }

 }
 void StudentData::saveAllBooks1()
 {
	 ofstream outfile("./data/books.txt",ios::out);
	 if(outfile.is_open())
	 {
		 vector<Book>::iterator p = allBooks1.begin();
		 for(; p!=allBooks1.end();p++)
		 {
			 outfile << p->getId() << " ";
			 outfile << p->getBookname() << endl;


		 }
		 outfile.close();
		 readAllBooks1();
	 }
	 else
	 {
		 cout << "文件打开失败" << endl;
	 }

 }

 
