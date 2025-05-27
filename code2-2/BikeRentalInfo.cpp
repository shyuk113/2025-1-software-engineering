#include "BikeRentalInfo.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


/*
	�Լ� �̸� : BikeRentalInfo::getRentalInfo(ofstream& out, vector<Bike>& bikeIDs)
	���	  : ������ �뿩 ����Ʈ Ȯ�� �޼���
	���� ���� : ofstream& out, vector<Bike>& bikeIDs
	��ȯ��    : ����
*/

void BikeRentalInfo::getRentalInfo(ofstream& out, vector<Bike>& bikeIDs)
{
	out << "5.1. ������ �뿩 ����Ʈ" << endl;
	for (const auto& bike : bikeIDs)
	{
		out << "> " << bike.bikeId << " " << bike.model << endl;
	}
	out << endl;
}