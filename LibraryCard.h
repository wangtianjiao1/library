#pragma  once
#include<string>
using namespace std;
class LibraryCard
{
private: string name;
		 string NameNumber;
		 string sex;

public:
	LibraryCard();

	~LibraryCard();
	    string GetName();
		string GetNameNumber();
		string GetSex();
	
		
		
		void SetName(string t_name);
		void SetNameNumber(string t_NameNumber);
		void SetSex(string t_sex);
		void SetBorrowBook(string t_BorrowNumber);
		void SetReturnBook(string t_ReturnBook);

};