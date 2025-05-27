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
    vector<Bike> bikeIDs;  //자전거 ID와 model을 저장
    vector<Member> memberList;  //회원가입한 사용자들의 id, password, phoneNum 저장
    string currentId;       //현재 로그인 중인 사용자의 id를 저장하여 로그아웃 할 때 출력
   
	bool is_program_exit = 0;

    if (!in.is_open()) {
        cout << " input.txt 열기 실패" << endl;  //input 파일이 제대로 열리는지
    }
    if (!out.is_open()) {
        cout << " output.txt 열기 실패" << endl;       //output 파일이 제대로 열리는지
    }
	
    while (!is_program_exit && (in >> menu1 >> menu2)) {
        switch (menu1) {
        case 1:
            if (menu2 == 1) {                  //1.1 회원가입 실행
                SignUp s;
                s.signUp(in, out,memberList);
            }
            break;
        case 2:
            if (menu2 == 1) {           //2.1 로그인 실행
                Login l;
                l.executeLogin(in, out,currentId);
            }
            else if (menu2 == 2) {          //2.2 로그아웃 실행
                Logout l;
                l.executeLogout(out,currentId);
            }
            break;
        case 3:
            if (menu2 == 1) {           //3.1 자전거 등록 실행
                BikeRegister b;
                b.registerBike(in, out,bikeIDs);
            }
            break;
        case 4:
            if (menu2 == 1) {           //4.1 자전거 대여 실행
                BikeRental b;
                b.rentalBike(in, out,bikeIDs);
            }
            break;
        case 5:
            if (menu2 == 1) {           //5.1 자전거 대여 리스트 출력 실행
                BikeRentalInfo b;
                b.getRentalInfo(out,bikeIDs);
            }
            break;
        case 6:
            if (menu2 == 1) {           //6.1 프로그램 종료 실행
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
