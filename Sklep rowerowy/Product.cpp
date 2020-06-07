#include "Product.h"
#include "Bicycle.h"
#include <string>
#include <fstream>
#include <iostream>
#include <exception>
#define SEPARATOR ";"
using namespace std;

Product::Product()
{
    type = "Product";
    name = "";
    price = 0;
    quantity = 0;
}

Product::Product(string name, float price, int quantity)
{
    type = "Product";
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

Product::Product(string data)
{
    type = "Product";
    set_all(data);
}

Product::~Product()
{
}

string Product::get()
{
    string info = "";
    info += type                + SEPARATOR;
    info += name                + SEPARATOR;
    info += to_string(price)    + SEPARATOR;
    info += to_string(quantity) + SEPARATOR;
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

int Product::get_quantity()
{
    return quantity;
}

void Product::set_all(string name, float price, int quantity)
{
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

void Product::set_all(string data)
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
            default:
                break;
            }
            ++i;
        }
    }
    catch(const runtime_error d)
    {
        cout << d.what() << endl << data << endl;
    }
}

void Product::set_name(string name)
{
    this->name = name;
}

void Product::set_price(float price)
{
    this->price = price;
}

void Product::set_quantity(int quantity)
{
    this->quantity = quantity;
}

void Product::change_quantity(int chage)
{
    quantity += chage;
}

istream &operator>>( istream  &input, Product &P){
    string data;
    input >> data;
    P.set_all(data);
    return input;
}

ostream &operator<<(ostream &output, Product &P)
{
    output << P.get();
    return output;
}

void Product::save(string filename)
{
    ofstream file;
    file.open(filename);
    file << get();
    file.close();
}

void Product::read(string filename)
{
    ifstream file;
    file.open(filename);
    string data;
    file >> data;
    set_all(data);
    file.close();
}

void* Product:: operator new(size_t size)
{
    void * p = ::new Product();
    return p;
}

void Product::operator delete(void * p)
{
    free(p);
}

void Product::buy_the_product()
{
	string ans;
	std::cout << get()
			  << "\nDo you want to buy the product? [Y/N]: "
			  << std::endl;
	cin >> ans;
	if(ans == "Y" || ans == "y")
	{
		int chosen_quantity;
		cout << "To buy the product enter the quantity "
			 << "[max. " + to_string(get_quantity()) + "]: ";
		cin >> chosen_quantity;

		if(chosen_quantity <= get_quantity())
		{
			change_quantity(-chosen_quantity);
		}
		else
			cout << "Quantity too large. " << std::endl;
	};
};