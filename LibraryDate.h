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
		LibraryCard& GetLibraryCard(string NameNumber);//����ͼ�����֤
        vector<LibraryCard>& GetAllLibraryCard();//�õ�����ͼ�����֤
		void PrintAllLibraryCard();//��ӡ����ͼ�����֤
		
		void printLibraryCard();
		void addLibraryCard();//��ӽ���֤
		void SaveAllLibraryCard();
		
		void addLibraryCard(string name,string number,string sex);
		
		void dellibrary(string number);
		void modifyUser(string name,string number,string sex);


};