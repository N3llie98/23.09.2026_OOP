#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM()
{
	price = 0;
	model = "";
	memoryInBytes = 0;
}

RAM::RAM(double _price, string _model, long long _memoryInBytes)
{
	price = _price;
	model = _model;
	memoryInBytes = _memoryInBytes;
}

void RAM::printInfo()
{
	cout << "Price: " << price << "\nModel: " << model
		<< "\nMemory in bytes: " << memoryInBytes << endl;
}

double RAM::getPrice()
{
	return price;
}

string RAM::getModel()
{
	return model;
}

long long RAM::getMemoryInBytes()
{
	return memoryInBytes;
}

void RAM::setPrice(double _price)
{
	price = _price;
}

void RAM::setModel(string _model)
{
	model = _model;
}

void RAM::setMemoryInBytes(long long _memoryInBytes)
{
	memoryInBytes = _memoryInBytes;
}
