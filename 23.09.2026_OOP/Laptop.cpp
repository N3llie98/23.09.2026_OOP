#include "Laptop.h"

Laptop::Laptop()
{
	brand = "";
	price = 0;
}

Laptop::Laptop(CPU _cpu, GPU _gpu, RAM _ram, SSD _ssd, string _brand, double _price)
{
	cpu = _cpu;
	gpu = _gpu;
	ram = _ram;
	ssd = _ssd;
	brand = _brand;
	price = _price;
}

void Laptop::printInfo()
{
	cout << "-Laptop:\nBrand: " << brand << "\nPrice: " << price << endl;
	cout << "-CPU:\n";
	cpu.printInfo();
	cout << "-GPU:\n";
	gpu.printInfo();
	cout << "-RAM:\n";
	ram.printInfo();
	cout << "-SSD:\n";
	ssd.printInfo();
}

CPU Laptop::getCpu()
{
	return cpu;
}

GPU Laptop::getGpu()
{
	return gpu;
}

RAM Laptop::getRam()
{
	return ram;
}

SSD Laptop::getSsd()
{
	return ssd;
}

string Laptop::getBrand()
{
	return brand;
}

double Laptop::getPrice()
{
	return price;
}

void Laptop::setCpu(CPU _cpu)
{
	cpu = _cpu;
}

void Laptop::setGpu(GPU _gpu)
{
	gpu = _gpu;
}

void Laptop::setRam(RAM _ram)
{
	ram = _ram;
}

void Laptop::setSsd(SSD _ssd)
{
	ssd = _ssd;
}

void Laptop::setBrand(string _brand)
{
	brand = _brand;
}

void Laptop::setPrice(double _price)
{
	price = _price;
}
