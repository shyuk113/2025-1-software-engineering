#ifndef BIKERENTAL_H
#define BIKERENTAL_H

#include <fstream>
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

class BikeRental
{
public:
	void rentalBike(ifstream& in, ofstream& out, vector<Bike>& bikeIDs); //자전거 대여
};

#endif
