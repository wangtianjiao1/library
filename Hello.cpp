#pragma once
#include "stdafx.h"
#include "Hello.h"
#include <iostream>
#include <string>
using namespace std;
Hello::Hello(){}
Hello::~Hello(){}
void Hello:: BeginHello()
{
	cout<<"-------------------------"<<endl;
	cout<<"��ӭʹ�ö���ͼ��ܹ���ϵͳ"<<endl;
	cout<<"-------------------------"<<endl;

}
void Hello::StudentHello()
{

	cout<<"--------------------------------"<<endl;
	cout<<"|"<</*student.name<<*/"BOb|"<<"��ӭʹ�ö���ͼ��ݹ���ϵͳ"<<endl;
	cout<<"-------------------------------"<<endl;
};
void Hello::TeacherHello()
{
	cout<<"-----------------------------------"<<endl;
	cout<<"ͼ�����Ա��ӭʹ��ͼ��ݹ���ϵͳ"<<endl;
	cout<<"-----------------------------------"<<endl;
}
void Hello::BorrowBookHello()
{
	cout<<"-------------------------"<<endl;
	cout<<"��ӭʹ�ö���ͼ��ܹ���ϵͳ"<<endl;
	cout<<"-------------------------"<<endl;
}
void Hello::LibraryBook()
{
	cout<<"-------------------------"<<endl;
	cout<<"��ӭ�������֤֤����ϵͳ"<<endl;
	cout<<"-------------------------"<<endl;

}
void Hello::EndHello()
{
	cout<<"------------------------------"<<endl;
	cout<<"ллʹ�ã�ף������ƽ������������"<<endl;
	cout<<"------------------------------"<<endl;
}
void Hello::BookHello()
{
	cout<<"-------------------------"<<endl;
	cout<<"��ӭͼ�����ϵͳ"<<endl;
	cout<<"-------------------------"<<endl;
}
string Hello::LibraryLookUpChoice()
{
	cout<<"��ѡ��Ҫ��ѯ��ѧ��ѧ��"<<endl;
	string NN;
	cin>>NN;
	return NN;
}
int Hello::StudentChoice()
{
	
	cout<<"---------------------------"<<endl;
	cout<<"1->�����鱾"<<endl;
	cout<<"2->�黹�鱾"<<endl;
	cout<<"3->��ʾ�����ѽ�ͼ��"<<endl;
	cout<<"4->�˳�ϵͳ"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"��ѡ������Ҫִ�еĹ���"<<endl;
	int i;
	cin>>i;
	return i;
}
