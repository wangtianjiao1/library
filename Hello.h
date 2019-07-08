#pragma once
#include <string>
using namespace std;
class Hello
{private:


public:
		Hello();
	   ~Hello();
	   void StudentHello();
	   void TeacherHello();
	   void BeginHello();
	   void BorrowBookHello();
	   void ReturnBookHello();
	   void LibraryBook();
	   void EndHello();
	   void BookHello();
	  string LibraryLookUpChoice();
	  int StudentChoice();
	  // static Hello* getHello();
}; 