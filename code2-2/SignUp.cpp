#include "SignUp.h"
#include "Member.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*
	함수 이름 :  SignUp::signUp(ifstream& in, ofstream& out, vector<Member>& userList)
	기능	  : 회원가입 메서드
	전달 인자 : ifstream& in, ofstream& out, string& currentId
	반환값    : 없음
*/
void SignUp::signUp(ifstream& in, ofstream& out, vector<Member>& userList)
{
	string id, password,phoneNum;
	Member member;
	in >> id >> password >>phoneNum;

	userList.push_back(member); 

	out << "1.1. 회원가입" << endl;
	out << "> " << id << " " << password << " " << phoneNum << endl << endl;
}