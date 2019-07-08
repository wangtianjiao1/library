#pragma once
#include "stdafx.h"
#include"LibraryCard.h"
#include <string.h>
LibraryCard::LibraryCard(){}
LibraryCard::~LibraryCard(){}
 string LibraryCard::GetName()
 {
	 return name;
 }
 string LibraryCard::GetNameNumber()
 {
	 return NameNumber;
 }
 string LibraryCard::GetSex()
 {
	 return sex;
 }


 void LibraryCard::SetName(string t_name)
 {
	 name=t_name;
 }
 void LibraryCard::SetNameNumber(string t_NameNumber)
 {
	 NameNumber=t_NameNumber;
 }
 void LibraryCard::SetSex(string t_sex)
 {
	 sex=t_sex;
 }
