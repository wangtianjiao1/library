#pragma once
#include <vector>
using namespace std;
class LibraryUtils
{
public: 
	LibraryUtils();
	~LibraryUtils();
	void SplitStr(string line,vector<string>& strs,string split);
};