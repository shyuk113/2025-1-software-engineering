#include "SignUp.h"
#include "Member.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*
	�Լ� �̸� :  SignUp::signUp(ifstream& in, ofstream& out, vector<Member>& userList)
	���	  : ȸ������ �޼���
	���� ���� : ifstream& in, ofstream& out, string& currentId
	��ȯ��    : ����
*/
void SignUp::signUp(ifstream& in, ofstream& out, vector<Member>& userList)
{
	string id, password,phoneNum;
	Member member;
	in >> id >> password >>phoneNum;

	userList.push_back(member); 

	out << "1.1. ȸ������" << endl;
	out << "> " << id << " " << password << " " << phoneNum << endl << endl;
}