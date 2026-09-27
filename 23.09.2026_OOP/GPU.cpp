#include "GPU.h"
#include <iostream>
using namespace std;

GPU::GPU()
{
	price = 0;
	model = "";
	cyclesPerSec = 0;
	cores = 0;
}

GPU::GPU(double _price, string _model, int _cyclesPerSec, int _cores)
{
	price = _price;
	model = _model;
	cyclesPerSec = _cyclesPerSec;
	cores = _cores;
}

void GPU::printInfo()
{
	cout << "Price: " << price << "\nModel: " << model
		<< "\nCycles per second: " << cyclesPerSec << "\nCores: " << cores << endl;
}

double GPU::getPrice()
{
	return price;
}

string GPU::getModel()
{
	return model;
}

int GPU::getCyclesPerSec()
{
	return cyclesPerSec;
}

int GPU::getCores()
{
	return cores;
}

void GPU::setPrice(double _price)
{
	price = _price;
}

void GPU::setModel(string _model)
{
	model = _model;
}

void GPU::setCyclesPerSec(int _cyclesPerSec)
{
	cyclesPerSec = _cyclesPerSec;
}

void GPU::setCores(int _cores)
{
	cores = _cores;
}
