#pragma once
#include "stdafx.h"
#include "LibraryCard.h"
#include "LibraryUtils.h"
#include "LibraryDate.h"
#include "LibraryUtils.h"
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

LibraryDate::~LibraryDate(){}
LibraryDate::LibraryDate(){}
 void LibraryDate::ReadLibraryCard()
{
	AllLibraryCard.clear();
	LibraryUtils libraryutils;
	ifstream infile("./librarydata.txt",ios::in);

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
				string sex = *p;
				LibraryCard temp;
		    temp.SetName(name);
			temp.SetNameNumber(NameNumber);
			temp.SetSex(sex);

				AllLibraryCard.push_back(temp);
			}
			infile.close();
			
		}
		else
		{
			cout<<"文件打开失败"<<endl;
		}

}
 vector<LibraryCard>& LibraryDate::GetAllLibraryCard()
 {
	 ReadLibraryCard();
	 /* vector<LibraryCard>::iterator p=AllLibraryCard.begin();
	 for (LibraryCard l;p!=AllLibraryCard.end();p++)
	 {
	 l=*p;
	 cout<<"Name="<<l.GetName()<<" "<<"NameNumbber="<<l.GetNameNumber()<<" "<<"Sex="<<l.GetSex()<<" "<<"BorrowBook="<<l.GetBorrowBook()<<" "<<"ReturnBook="<<l.GetReturnBook()<<endl;
	 }*/
	 return AllLibraryCard;}
 LibraryCard& LibraryDate::GetLibraryCard(string NameNumber)
 {
	 vector<LibraryCard> ::iterator p=AllLibraryCard.begin();
	    for (LibraryCard l;p!=AllLibraryCard.end();p++)
	    {
			l=*p;
			if (l.GetNameNumber()==NameNumber)
			{
			  librayrycard.SetName(l.GetName());
			  librayrycard.SetNameNumber(l.GetNameNumber());
			  librayrycard.SetSex(l.GetSex());

			  return librayrycard;
			}
			
	    }
		cout<<"没有找到该用户"<<endl;

 }
	void LibraryDate::printLibraryCard()
	{
		cout<<"Name="<<librayrycard.GetName()<<" "<<"NameNumbber="<<librayrycard.GetNameNumber()<<" "<<"Sex="<<librayrycard.GetSex()<<endl;
	}
    void LibraryDate::PrintAllLibraryCard()
	 {
		 
		 vector<LibraryCard>::iterator p=AllLibraryCard.begin();
	 for (LibraryCard l;p!=AllLibraryCard.end();p++)
	 {
	 l=*p;
	 cout<<"Name="<<l.GetName()<<" "<<"NameNumbber="<<l.GetNameNumber()<<" "<<"Sex="<<l.GetSex()<<endl;
	 }

	 }
	void LibraryDate::SaveAllLibraryCard()
	 {
		 ofstream outfile("./librarydata.txt",ios::out);
		 if(outfile.is_open())
		 {
			 vector<LibraryCard>::iterator p = AllLibraryCard.begin();
			 for(; p!=AllLibraryCard.end();p++)
			 {
				 outfile << p->GetName() << " ";
				 outfile << p->GetNameNumber() << " ";
				 outfile << p->GetSex()<<endl;
				
			 }
			 outfile.close();
			 ReadLibraryCard();
		 }
		 else
		 {
			 cout << "文件打开失败" << endl;
		 }
	 }
	void LibraryDate::addLibraryCard(string name,string number,string sex)
	{
		ReadLibraryCard();
		LibraryCard librayrycard;
		librayrycard.SetName(name);
		librayrycard.SetNameNumber(number);
		librayrycard.SetSex(sex);
		AllLibraryCard.push_back(librayrycard);
		SaveAllLibraryCard();
	}
	void LibraryDate::modifyUser(string name,string number,string sex)
	{
		ReadLibraryCard();
		vector<LibraryCard>::iterator p = AllLibraryCard.begin();
		for( ;p!=AllLibraryCard.end();p++)
		{
			if(p->GetNameNumber()==number)
			{
				p->SetName(name);
				p->SetSex(sex);
				SaveAllLibraryCard();
				return;
			}
		}
	}
	void LibraryDate::dellibrary(string number)
		{
			ReadLibraryCard();
			vector<LibraryCard>::iterator p = AllLibraryCard.begin();
			for( ;p!=AllLibraryCard.end();p++)
			{
				if(p->GetNameNumber()==number)
				{
					AllLibraryCard.erase(p);
					SaveAllLibraryCard();
					return;
				}
			}
		}
