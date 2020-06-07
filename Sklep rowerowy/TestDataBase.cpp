#include "TestDataBase.h"
#include "Product.h"
#include "Bicycle.h"
#include "DataBase.h"
#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

TestDataBase::TestDataBase(){}

TestDataBase::~TestDataBase(){}

bool TestDataBase::test_construct()
{
    bool result = true;
    DataBase db;
    if (db.get() != "")
    {
        result = false;
        cout << endl << db.get() << "is not empty" << endl;
    }
    return result;
}

bool TestDataBase::test_add()
{

    bool result = true;
    DataBase db;
    Product p("testname", 123.456, 789);
    db.add_record(&p);
    if (db.get() != "Product;testname;123.456001;789;\n")
    {
        result = false;
        cout << endl << db.get() << " != " << "Product;testname;123.456001;789;\n" << endl;
    }
    Bicycle b("testname2", 1123.456, 1789, "M");
    db.add_record(&b);
    if (db.get() != "Product;testname;" + to_string(float(123.456)) + ";789;\nBicycle;testname2;" + to_string(float(1123.456)) + ";1789;M;\n")
    {
        result = false;
        cout << endl << db.get() << " != " << "Product;testname;" + to_string(float(1123.456)) + ";789;\nBicycle;testname2;" + to_string(float(1123.456)) + ";1789;M;\n" << endl;
    }
    return result;
}
