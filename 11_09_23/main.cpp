#include <iostream>
#include "Laptop.h"

using namespace std;

int main()
{
    Mouse mouse1("mouse", 55.5);
    Laptop laptop1("laptop1", "red", CPU("cpu", 1, 11), SSD("ssd", 3, 33), GPU("gpu", 2, 22), RAM("ram", 4, 44), &mouse1);
	laptop1.printLaptop();
	cout << "\nLaptop Count: " << Laptop::getLaptopCount() << endl;

    cout << "\n\nMouse1: ";
    mouse1.printMouse();
}