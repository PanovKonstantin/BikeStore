#include "Bicycle.h"
#include <string>
#include <fstream>
#include <iostream>
#include <exception>
#define SEPARATOR ";"

using namespace std;

Bicycle::Bicycle()
{
    type = "Bicycle";
}

Bicycle::Bicycle(string name, float price, int quantity, string bicycle_size)
{
    type = "Bicycle";
    this->name = name;
    this->price = price;
    this->quantity = quantity;
    this->bicycle_size = bicycle_size;
}

Bicycle::Bicycle(const Bicycle &other)
{
    this->type = other.type;
    this->name = other.name;
    this->price = other.price;
    this->bicycle_size = other.bicycle_size;
}

Bicycle::Bicycle(string data)
{
    type = "Bicycle";
    name = "";
    price = 0;
    quantity = 0;
    set_all(data);
}

Bicycle::~Bicycle()
{
    //dtor
}

void Bicycle::set_all(string data)
{
    try
    {
        string token;
        int i = 0;
        size_t pos = 0;
        while((pos = data.find(SEPARATOR)) != string::npos)
        {
            token = data.substr(0, pos);
            data.erase(0, pos + 1);
            switch(i)
            {
            case 0:
                if (type != token)
                    throw runtime_error("Not a product");
                break;
            case 1:
                name = token;
                break;
            case 2:
                if (token.find_first_not_of("0123456789-+.") != string::npos)
                    throw runtime_error("Not an integer");
                price = stof(token);
                break;
            case 3:
                if (token.find_first_not_of("0123456789-+.") != string::npos)
                    throw runtime_error("Not an integer");
                quantity = stoi(token);
                break;
            case 4:
                bicycle_size = token;
                break;
            default:
                break;
            }
            ++i;
        }
    }
    catch(const runtime_error d)
    {
        cout << d.what() << endl;
    }
}

string Bicycle::get()
{
    return Product::get() + bicycle_size + SEPARATOR;
}


istream &operator>>( istream  &input, Bicycle &B){
    string data;
    input >> data;
    B.set_all(data);
    return input;
}

ostream &operator<<(ostream &output, Bicycle &B)
{
    output << B.get();
    return output;
}

void Bicycle::save(string filename){}

void Bicycle::read(string filename){}

void * Bicycle:: operator new(size_t size)
{
    void * p = ::new Bicycle();
    return p;
}

void Bicycle::operator delete(void * p)
{
    free(p);
}
