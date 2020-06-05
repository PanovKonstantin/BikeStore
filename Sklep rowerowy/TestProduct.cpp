#include "TestProduct.h"
#include "Product.h"
#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

TestProduct::TestProduct(){}

TestProduct::~TestProduct(){}

bool TestProduct::test_construct()
{
    bool result = true;
    Product test;
    result &= control(&test, "", 0, 0);
    Product test2("name", 123.456, 789);
    result &= control(&test2, "name", 123.456, 789);
    Product test3("Product;name;123.456;789;");
    result &= control(&test3, "name", 123.456, 789);
    return result;
}

bool TestProduct::test_set()
{
    bool result = true;
    Product test;
    test.set_name("name");
    test.set_price(123.456);
    test.set_quantity(789);
    result &= control(&test, "name", 123.456, 789);
    test.set_all("Product;name2;456.789;123;");
    result &= control(&test, "name2", 456.789, 123);
    test.change_quantity(100);
    result &= control(&test, "name2", 456.789, 223);
    return result;
}

bool TestProduct::test_save()
{
    bool result = true;
    Product test("name", 123.456, 789);
    test.save("test.txt");
    ifstream file;
    file.open("test.txt");
    string t;
    file >> t;
    file.close();
    if (t == "Product;name;" + to_string(float(123.456)) + ";789;")
        return true;
    else
        cout << t << endl;
    return false;
}

bool TestProduct::control(Product* P, string name, float price, int quantity)
{
    bool result = true;
    result &= P->get_name() == name;
    result &= P->get_price() == price;
    result &= P->get_quantity() == quantity;
    if (!result)
    {
        cout << P->get_name() << " " << P->get_price() << " " << P->get_quantity() << endl;
        cout << name << " " << price << " " << quantity << endl;
    }
    return result;
}
