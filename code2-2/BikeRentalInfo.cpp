#include "BikeRentalInfo.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


/*
	함수 이름 : BikeRentalInfo::getRentalInfo(ofstream& out, vector<Bike>& bikeIDs)
	기능	  : 자전거 대여 리스트 확인 메서드
	전달 인자 : ofstream& out, vector<Bike>& bikeIDs
	반환값    : 없음
*/

void BikeRentalInfo::getRentalInfo(ofstream& out, vector<Bike>& bikeIDs)
{
	out << "5.1. 자전거 대여 리스트" << endl;
	for (const auto& bike : bikeIDs)
	{
		out << "> " << bike.bikeId << " " << bike.model << endl;
	}
	out << endl;
}