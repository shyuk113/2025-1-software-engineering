#include "BikeRental.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
/*
	함수 이름 : BikeRental::rentalBike(ifstream& in, ofstream& out,vector<Bike>& bikeIDs)
	기능	  : 자전거를 대여하는 메서드
	전달 인자 : ifstream& in, ofstream& out, vector<Bike>& bikeIDs
	반환값    : 없음
*/
void BikeRental::rentalBike(ifstream& in, ofstream& out,vector<Bike>& bikeIDs)
{
	Bike bike;
	string bikeId, model;
	in >> bikeId;

	for (const auto& bike : bikeIDs)
	{
		if (bike.bikeId == bikeId)
		{
			model = bike.model;
			break;
		}
	}
	out << "4.1. 자전거 대여" << endl;
	out << "> " << bikeId << " " << model << endl << endl;
}