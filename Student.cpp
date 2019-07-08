#pragma once
#include "stdafx.h"
#include "Student.h"

string Student::getStudentName()
{
	return StudentName;
}

string Student::getStudentNumber()
{
	return StudentNumber;
}
string Student::getb1()
{
	return B1;
}
string Student::getb2()
{
	return B2;
}
string Student::getb3()
{
	return B3;
}
string Student::getb4()
{
	return B4;
}
string Student::getb5()
{
	return B5;
}
void Student::SetStudentName(string name)
{
	StudentName=name;
}
void Student::SetStudentNumber(string number)
{
	StudentNumber=number;

}
void Student::Setb1(string b1)
{
	B1=b1;
}
void Student::Setb2(string b2)
{
	B2=b2;
}
void Student::Setb3(string b3)
{
	B3=b3;
}
void Student::Setb4(string b4)
{
	B4=b4;
}
void Student::Setb5(string b5)
{
	B5=b5;
}