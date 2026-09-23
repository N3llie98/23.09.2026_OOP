#pragma once
#include <iostream>
using namespace std;
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "GPU.h"

class Laptop
{
	CPU cpu;
	string brand;
	double price;
public:
	Laptop();
	Laptop(CPU _cpu, string _brand, double price);

	void printInfo();
};

