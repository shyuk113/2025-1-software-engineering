#include "Logout.h"
#include <iostream>
#include <fstream>
/*
	�Լ� �̸� :  Logout::executeLogout(ofstream& out, string& currentId)
	���	  : �α׾ƿ� �޼���
	���� ���� : ofstream& out, string& currentId
	��ȯ��    : ����
*/

void Logout::executeLogout(ofstream& out, string& currentId)
{
	out << "2.2. �α׾ƿ�" << endl;
	out << "> " << currentId << endl << endl;
}