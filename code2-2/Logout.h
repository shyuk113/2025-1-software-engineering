#ifndef LOGOUT_H
#define LOGOUT_H

#include <fstream>
#include <string>
using namespace std;

class Logout
{
public:
	void executeLogout(ofstream& out, string& currentId); //�α� �ƿ�
};

#endif