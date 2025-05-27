#include "BikeRegister.h"
#include "Bike.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*
	�Լ� �̸� : void BikeRegister::registerBike(ifstream& in, ofstream& out, vector<Bike>& bikeIDs )
	���	  : �����Ÿ� ����ϴ� �޼���
	���� ���� : ifstream& in, ofstream& out, vector<Bike>& bikeIDs
	��ȯ��    : ����
*/

void BikeRegister::registerBike(ifstream& in, ofstream& out, vector<Bike>& bikeIDs )
{
	Bike bike;
	string bikeId, model;
	in >> bike.bikeId >> bike.model;
	bikeIDs.push_back(bike);

	out << "3.1. ������ ���" << endl;
	out << "> " << bike.bikeId << " " << bike.model << endl << endl;
}