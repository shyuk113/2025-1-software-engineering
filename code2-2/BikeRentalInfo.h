#ifndef BIKERENTALINFO_H
#define BIKERENTALINFO_H

#include <fstream>
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

class BikeRentalInfo
{
public:
	void getRentalInfo(ofstream& out, vector<Bike>& bikeIDs); //������ �뿩 ����Ʈ
};

#endif