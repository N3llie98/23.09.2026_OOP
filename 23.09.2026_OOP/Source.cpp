#include <iostream>
using namespace std;
#include "Laptop.h"

int main()
{
	CPU cpu1("intel", 4, 3.5);
	Laptop lt1(cpu1, "Dell", 1200.0);
	lt1.printInfo();

	CPU cpu2("AMD", 8, 14000);
	Laptop lt2(cpu2, "HP", 45000);
	lt2.printInfo();
	return 0;
}