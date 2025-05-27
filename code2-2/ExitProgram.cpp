#include <iostream>
#include <fstream>
#include "ExitProgram.h"
using namespace std;

/*
	함수 이름 : ExitProgram::exit(ofstream& out)
	기능	  : 프로그램 종료 메서드
	전달 인자 : ofstream& out
	반환값    : 없음
*/

void ExitProgram::exit(ofstream& out)
{
	out << "6.1. 종료" << endl;
}