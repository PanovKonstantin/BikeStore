#ifndef TESTDATABASE_H
#define TESTDATABASE_H


#include "Product.h"
#include "Bicycle.h"
#include "DataBase.h"

using namespace std;

class TestDataBase
{
public:
    TestDataBase();
    ~TestDataBase();
    bool test_construct();
    bool test_add();
//    bool test_save();
//    bool test_read();
//    bool control(Product* P, string name, float price, int quantity);
};

#endif
