#ifndef BIKEREGISTER_H
#define BIKEREGISTER_H

#include <fstream>
#include <string>
#include <vector>
#include "Bike.h"
using namespace std;

class BikeRegister
{
public:
	void registerBike(ifstream& in, ofstream& out, vector<Bike>& bikeIDs); //������ ���
};

#endif