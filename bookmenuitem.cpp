#pragma once
#include "StdAfx.h"
#include "bookMenuItem.h"

BookMenuItem::BookMenuItem(){}
BookMenuItem::~BookMenuItem(){}

string BookMenuItem::getId()
{
	return id;
}

string BookMenuItem::getText()
{
	return text;
}

vector<BookMenuItem>& BookMenuItem::getChildItems()
{
	return childItems;
}