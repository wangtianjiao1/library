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

	vector<Book> allBooks1;//������е�ͼ����Ϣ
	Book book1;//���һ��ͼ����Ϣ

	
public:
	/********************************************/
	//1.��ȡallUsers����
	vector<Book>& getAllBooks1();
	//2.��ȡtemp����
	Book& getBook1(string id);
	//3.���ļ���ȡ���ݣ�������µ�allUsers��
	void readAllBooks1();
	//4.��allUsersд�뵽�ļ���
	void saveAllBooks1();
	void printAllBooks1();
	//5.����
	/********************************************/
	


	
		StudentData();
		
		void ReadStudent();//��ȡ�ı�
		Student& GetStudent(string NameNumber);
		vector<Student>& GetAllStudent();//�õ�����ѧ��
		
		//void GetLiBraryCard();//�õ�һ��LibraryCard.
	//	void printLibraryCard(string number);
		
	   void SaveAllStudent();//��������ѧ��������

		
	    void ReturnBook(string id,string number);//�滮�鱾��number�黹�鱾�ı��
		void BorrrowBook(string number,string b1);//����ı��
		void printAllBorrowBook(string number);//��ӡ���и�ѧ���ѽ�ͼ�������
};