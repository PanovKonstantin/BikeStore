#ifndef TESTPRODUCT_H
#define TESTPRODUCT_H


#include "Product.h"
using namespace std;

class TestProduct
{
public:
    TestProduct();
    ~TestProduct();
    bool test_construct();
    bool test_set();
    bool test_save();
    bool test_read();
    bool control(Product* P, string name, float price, int quantity);
};

#endif
