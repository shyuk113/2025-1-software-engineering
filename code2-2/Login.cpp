#include "Login.h"
#include "User.h"
#include <iostream>
#include <fstream>
using namespace std;
/*
	�Լ� �̸� : Login::executeLogin(ifstream& in, ofstream& out, string& currentId)
	���	  : �α��� �޼���
	���� ���� : ifstream& in, ofstream& out, string& currentId
	��ȯ��    : ����
*/

void Login::executeLogin(ifstream& in, ofstream& out, string& currentId)
{
	string id, password;
	in >> id >> password;

	currentId = id;

	out << "2.1. �α���" << endl;
	out << "> " << id << " " << password << endl << endl;
}