#pragma once
#include<string>
using namespace std;
class Student
{
private: string  StudentName;
		 string StudentNumber;
		 string B1;
		 string B2;
		 string B3;
		 string B4;
	     string B5;
public: string getStudentName();
		string getStudentNumber();
		string getb1();
	    string getb2();
		string getb3();
		string getb4();
	    string getb5();
	    
	    //�����鱾�ı��
	  void Setb1(string b1);//���鱾��ֵ���
	  void Setb2(string b2);
	  void Setb3(string b3);
	  void Setb4(string b4);
	  void Setb5(string b5);
	  void SetStudentName(string name);//����ѧ��������
	  void SetStudentNumber(string number);//����ѧ����ѧ��




};