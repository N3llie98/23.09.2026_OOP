#pragma once
#include <iostream>
using namespace std;

class SSD
{
	double price;
	string model;
	long long capacityInBytes;
	long long readSpeed;
public:
	SSD();
	SSD(double _price, string _model, long long _capacityInBytes, long long _readSpeed);

	//METHODS
	void printInfo();

	//GETTERS
	double getPrice();
	string getModel();
	long long getCapacityInBytes();
	long long getReadSpeed();
	//SETTERS
	void setPrice(double _price);
	void setModel(string _model);
	void setCapacityInBytes(long long _capacityInBytes);
	void setReadSpeed(long long _readSpeed);
};