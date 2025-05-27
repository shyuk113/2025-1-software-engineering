#include "Login.h"
#include "User.h"
#include <iostream>
#include <fstream>
using namespace std;
/*
	함수 이름 : Login::executeLogin(ifstream& in, ofstream& out, string& currentId)
	기능	  : 로그인 메서드
	전달 인자 : ifstream& in, ofstream& out, string& currentId
	반환값    : 없음
*/

void Login::executeLogin(ifstream& in, ofstream& out, string& currentId)
{
	string id, password;
	in >> id >> password;

	currentId = id;

	out << "2.1. 로그인" << endl;
	out << "> " << id << " " << password << endl << endl;
}