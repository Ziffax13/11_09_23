#include "Mouse.h"
#include <iostream>

using namespace std;

Mouse::Mouse()
{
    model = nullptr;
    price = 0;
}
Mouse& Mouse::operator= (Mouse b)
{
    delete[] model;
    model = new char[strlen(b.model) + 1];
    strcpy_s(model, strlen(b.model) + 1, b.model);
    price = b.price;
    return *this;
}
Mouse::Mouse(const Mouse& b)
{
    model = new char[strlen(b.model) + 1];
    strcpy_s(model, strlen(b.model) + 1, b.model);
    price = b.price;
}
Mouse::Mouse(const char* n)
{
    model = new char[strlen(n) + 1];
    strcpy_s(model, strlen(n) + 1, n);
}
Mouse::Mouse(const char* n, double p) :Mouse(n)
{
    price = p;
}
void Mouse::printMouse()
{
    cout << "Mouse model: " << model << endl;
}
char* Mouse::getModel()
{
    return model;
}
double Mouse::getPrice()
{
    return price;
}
void Mouse::setPrice(double p)
{
    price = p;
}
Mouse::~Mouse()
{
    delete[] model;
}


