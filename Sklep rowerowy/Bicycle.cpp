#include "Bicycle.h"
#define SEPARATOR ";"

Bicycle::Bicycle()
{
    type = "Bicycle";
}

Bicycle::Bicycle(string new_name, float new_price, unsigned int new_quantity, string new_bicycle_size)
{
    type = "Bicycle";
    name = new_name;
    price = new_price;
    quantity = new_quantity;
    bicycle_size = new_bicycle_size;
}

Bicycle::~Bicycle()
{
    //dtor
}

string Bicycle::get()
{
    return Product::get() + SEPARATOR + bicycle_size;
}
