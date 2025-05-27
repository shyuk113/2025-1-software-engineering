#include "BikeRental.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
/*
	�Լ� �̸� : BikeRental::rentalBike(ifstream& in, ofstream& out,vector<Bike>& bikeIDs)
	���	  : �����Ÿ� �뿩�ϴ� �޼���
	���� ���� : ifstream& in, ofstream& out, vector<Bike>& bikeIDs
	��ȯ��    : ����
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
	out << "4.1. ������ �뿩" << endl;
	out << "> " << bikeId << " " << model << endl << endl;
}