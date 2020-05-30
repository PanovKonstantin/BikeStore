#include "Product.h"
#include <string>
#define SEPARATOR ";"
using namespace std;

Product::Product()
{
}

Product::Product(string new_name, float new_price, unsigned int new_quantity)
{
    name = new_name;
    price = new_price;
    quantity = new_quantity;
}

Product::~Product()
{
}

string Product::get()
{
    string info = name + SEPARATOR;
    info += to_string(price);
    info += SEPARATOR;
    info += to_string(quantity);
    return info;
}

string Product::get_name()
{
    return name;
}
float Product::get_price()
{
    return price;
}

unsigned int Product::get_quantity()
{
    return quantity;
}

void Product::set_name(string new_name)
{
    name = new_name;
}

void Product::set_price(float new_price)
{
    price = new_price;
}

void Product::set_quantity(unsigned int new_quantity)
{
    quantity = new_quantity;
}

void Product::change_quantity(int chage)
{
    quantity += chage;
}
