#pragma once
#include "stdafx.h"
#include "LibraryUtils.h"
#include <iostream>
using namespace std;
LibraryUtils::LibraryUtils(){}
void LibraryUtils::SplitStr(string line,vector<string>& strs,string split)
{
	int pos1=0;
	int pos2=0;
	pos2=line.find(split);
	while (pos2!=string::npos)
	{
		strs.push_back(line.substr(pos1,pos2-pos1));
		pos1=pos2+split.length();
		pos2=line.find(split,pos1);


	}
	if (pos1<line.size())
	{
		strs.push_back(line.substr(pos1));
	}
}
LibraryUtils::~LibraryUtils(){}

