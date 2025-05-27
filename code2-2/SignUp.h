#ifndef SIGNUP_H
#define SIGNUP_H

#include <fstream>
#include <string>
#include <vector>
#include "Member.h"
using namespace std;

class SignUp
{
public:
	void signUp(ifstream& in, ofstream& out,vector<Member>& memberList); //회원가입
};

#endif
