#include "BikeRegister.h"
#include "Bike.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*
	함수 이름 : void BikeRegister::registerBike(ifstream& in, ofstream& out, vector<Bike>& bikeIDs )
	기능	  : 자전거를 등록하는 메서드
	전달 인자 : ifstream& in, ofstream& out, vector<Bike>& bikeIDs
	반환값    : 없음
*/

void BikeRegister::registerBike(ifstream& in, ofstream& out, vector<Bike>& bikeIDs )
{
	Bike bike;
	string bikeId, model;
	in >> bike.bikeId >> bike.model;
	bikeIDs.push_back(bike);

	out << "3.1. 자전거 등록" << endl;
	out << "> " << bike.bikeId << " " << bike.model << endl << endl;
}