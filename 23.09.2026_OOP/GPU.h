#pragma once
#include <iostream>
using namespace std;

class GPU
{
	double price;
	string model;
	int cyclesPerSec;
	int cores;
public:
	GPU();
	GPU(double _price, string _model, int _cyclesPerSec, int _cores);

	//METHODS
	void printInfo();

	//GETTERS
	double getPrice();
	string getModel();
	int getCyclesPerSec();
	int getCores();
	//SETTERS
	void setPrice(double _price);
	void setModel(string _model);
	void setCyclesPerSec(int _cyclesPerSec);
	void setCores(int _cores);
};

