#pragma  once
#include "stdafx.h"
#include <iostream>
#include "libraryMenue.h"
using namespace std;
LibraryMenue::LibraryMenue(){}
LibraryMenue::~LibraryMenue(){}
int LibraryMenue::GetMyChoice()
{
	return MyChoice;
}
void LibraryMenue::PrintLibraryMenue()
{  int i;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"��ӭʹ�ý���֤����ϵͳ����ѡ��������Ҫִ�еĹ���"<<endl;
	cout<<"1-->��ʾ���н���֤"<<endl;
	cout<<"2-->��ѯ����֤"<<endl;
	cout<<"3-->����ѧ������֤"<<endl;
	cout<<"4-->ɾ������֤"<<endl;
	cout<<"5-->�޸Ľ���֤"<<endl;
	cout<<"4-->������һ��"<<endl;
	cout<<"----------------------------------------------"<<endl;
	cin>>i;
	MyChoice=i;


}
void  LibraryMenue::PrintLibraryLookupMene()
{  int i;

cout<<"--------------------------------------------"<<endl;
cout<<"��ӭʹ�ý���֤��ѯϵͳ����ѡ��������Ҫִ�еĹ���"<<endl;
cout<<"1-->ɾ������֤"<<endl;
cout<<"2-->�޸Ľ���֤��Ϣ"<<endl;
cout<<"----------------------------------------------"<<endl;
cin>>i;
MyChoice=i;
}
