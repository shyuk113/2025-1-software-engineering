#ifndef LOGIN_H
#define LOGIN_H

#include <fstream>
#include <string>
using namespace std;

class Login
{
public :
	void executeLogin(ifstream& in, ofstream& out, string& currentId); //·Î±×ÀÎ 
};
#endif