#include <fstream>
#include <iostream>
#include "Login.h"
#include "Logout.h"
#include "SignUp.h"
#include "BikeRegister.h"
#include "BikeRental.h"
#include "BikeRentalInfo.h"
#include "ExitProgram.h"
#include "Member.h"
#include "Bike.h"
#include "User.h"
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
using namespace std;

int main()
{
	ifstream in(INPUT_FILE_NAME);
	ofstream out(OUTPUT_FILE_NAME);

	int menu1, menu2;
    vector<Bike> bikeIDs;  //������ ID�� model�� ����
    vector<Member> memberList;  //ȸ�������� ����ڵ��� id, password, phoneNum ����
    string currentId;       //���� �α��� ���� ������� id�� �����Ͽ� �α׾ƿ� �� �� ���
   
	bool is_program_exit = 0;

    if (!in.is_open()) {
        cout << " input.txt ���� ����" << endl;  //input ������ ����� ��������
    }
    if (!out.is_open()) {
        cout << " output.txt ���� ����" << endl;       //output ������ ����� ��������
    }
	
    while (!is_program_exit && (in >> menu1 >> menu2)) {
        switch (menu1) {
        case 1:
            if (menu2 == 1) {                  //1.1 ȸ������ ����
                SignUp s;
                s.signUp(in, out,memberList);
            }
            break;
        case 2:
            if (menu2 == 1) {           //2.1 �α��� ����
                Login l;
                l.executeLogin(in, out,currentId);
            }
            else if (menu2 == 2) {          //2.2 �α׾ƿ� ����
                Logout l;
                l.executeLogout(out,currentId);
            }
            break;
        case 3:
            if (menu2 == 1) {           //3.1 ������ ��� ����
                BikeRegister b;
                b.registerBike(in, out,bikeIDs);
            }
            break;
        case 4:
            if (menu2 == 1) {           //4.1 ������ �뿩 ����
                BikeRental b;
                b.rentalBike(in, out,bikeIDs);
            }
            break;
        case 5:
            if (menu2 == 1) {           //5.1 ������ �뿩 ����Ʈ ��� ����
                BikeRentalInfo b;
                b.getRentalInfo(out,bikeIDs);
            }
            break;
        case 6:
            if (menu2 == 1) {           //6.1 ���α׷� ���� ����
                ExitProgram e;
                e.exit(out);
                is_program_exit = true;
            }
            break;
        }
    }

    in.close();
    out.close();
    return 0;
}
