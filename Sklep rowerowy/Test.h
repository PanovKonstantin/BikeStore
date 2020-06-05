#ifndef TEST_H
#define TEST_H
#include "DataBase.h"
#include "TestProduct.h"
#include "Record.h"
#include "Bicycle.h"
#include "ConsoleInterface.h"

class Test
{
public:
    TestProduct product_test;
    Test();
    ~Test();
    bool testProduct();

};

#endif
