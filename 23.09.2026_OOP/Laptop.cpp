#include "Laptop.h"

Laptop::Laptop()
{
}

Laptop::Laptop(CPU _cpu, string _brand, double _price)
{
	cpu = _cpu;
	brand = _brand;
	price = _price;
}

void Laptop::printInfo()
{
	cpu.printInfo();
	cout << "Brand: " << brand << "\nPrice: $" << price << endl << endl;
}
