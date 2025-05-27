#include "Logout.h"
#include <iostream>
#include <fstream>
/*
	함수 이름 :  Logout::executeLogout(ofstream& out, string& currentId)
	기능	  : 로그아웃 메서드
	전달 인자 : ofstream& out, string& currentId
	반환값    : 없음
*/

void Logout::executeLogout(ofstream& out, string& currentId)
{
	out << "2.2. 로그아웃" << endl;
	out << "> " << currentId << endl << endl;
}