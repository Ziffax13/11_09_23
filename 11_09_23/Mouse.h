#include <iostream>

class Mouse
{
    char* model;
    double price;
public:
    Mouse();
    Mouse(const char*);
    Mouse(const Mouse& b);
    Mouse& operator= (Mouse b);
    Mouse(const char* n, double p);
    void printMouse();
    char* getModel();
    double getPrice();
    void setPrice(double p);
    ~Mouse();
};



