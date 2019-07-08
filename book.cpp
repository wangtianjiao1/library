#pragma once
#include "StdAfx.h"
#include "Book.h"
#include "bookutils.h"
#include "bookdatautils.h"
#include <vector>
#include <iostream>

Book::Book(){}
Book::~Book(){}




string Book::getId()
{
	return id;
}
string Book::getBookname()
{
	return bookname;
}



void Book::setId(string t_id)
{
	id = t_id;
}

void Book::setBookname(string t_bookname)
{
	bookname = t_bookname;
}
