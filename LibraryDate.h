#pragma once
#include "LibraryCard.h"
#include <vector>
using namespace std;
class LibraryDate
{
private: LibraryCard librayrycard;
		 vector<LibraryCard> AllLibraryCard;


public: LibraryDate();
		virtual~LibraryDate();
		void ReadLibraryCard();
		LibraryCard& GetLibraryCard(string NameNumber);//查找图书借阅证
        vector<LibraryCard>& GetAllLibraryCard();//得到所有图书借阅证
		void PrintAllLibraryCard();//打印所有图书借阅证
		
		void printLibraryCard();
		void addLibraryCard();//添加借阅证
		void SaveAllLibraryCard();
		
		void addLibraryCard(string name,string number,string sex);
		
		void dellibrary(string number);
		void modifyUser(string name,string number,string sex);


};