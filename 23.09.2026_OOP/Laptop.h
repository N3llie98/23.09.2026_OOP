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
	GPU gpu;
	RAM ram;
	SSD ssd;
	string brand;
	double price;
public:
	Laptop();
	Laptop(CPU _cpu, GPU _gpu, RAM _ram, SSD _ssd, string _brand, double _price);

	//METHODS
	void printInfo();

	//GETTERS
	CPU getCpu();
	GPU getGpu();
	RAM getRam();
	SSD getSsd();
	string getBrand();
	double getPrice();
	//SETTERS
	void setCpu(CPU _cpu);
	void setGpu(GPU _gpu);
	void setRam(RAM _ram);
	void setSsd(SSD _ssd);
	void setBrand(string _brand);
	void setPrice(double _price);
};

