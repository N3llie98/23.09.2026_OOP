#pragma once
#include <iostream>
using namespace std;

class CPU
{
	string model;
	int cores;
	double price;
public:
	CPU();
	CPU(string model, int cores, double price);

	void printInfo();

	void setModel(string model);
	void setCores(int cores);
	void setPrice(double price);

	string getModel();
	int getCores();
	double getPrice();
};

