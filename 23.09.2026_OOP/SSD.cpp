#include "SSD.h"
#include <iostream>
using namespace std;

SSD::SSD()
{
	price = 0;
	model = "";
	capacityInBytes = 0;
	readSpeed = 0;
}

SSD::SSD(double _price, string _model, long long _capacityInBytes, long long _readSpeed)
{
	price = _price;
	model = _model;
	capacityInBytes = _capacityInBytes;
	readSpeed = _readSpeed;
}

void SSD::printInfo()
{
	cout << "Price: " << price << "\nModel: " << model
		<< "Capacity in bytes: " << capacityInBytes << "Read speed: " << readSpeed << endl;
}

double SSD::getPrice()
{
	return price;
}

string SSD::getModel()
{
	return model;
}

long long SSD::getCapacityInBytes()
{
	return capacityInBytes;
}

long long SSD::getReadSpeed()
{
	return readSpeed;
}

void SSD::setPrice(double _price)
{
	price = _price;
}

void SSD::setModel(string _model)
{
	model = _model;
}

void SSD::setCapacityInBytes(long long _capacityInBytes)
{
	capacityInBytes = _capacityInBytes;
}

void SSD::setReadSpeed(long long _readSpeed)
{
	readSpeed = _readSpeed;
}
