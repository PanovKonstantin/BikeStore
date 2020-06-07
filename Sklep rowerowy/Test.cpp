#include "DataBase.h"
#include "TestProduct.h"
#include "Record.h"
#include "Bicycle.h"
#include "ConsoleInterface.h"
#include "Test.h"
#include <iostream>

using namespace std;
Test::Test(){}

Test::~Test(){}

bool Test::start()
{
    cout << "Testing Product class";
    if(testProduct())
        cout << " - Success" << endl;
    else
        cout << "Product class - Failure" << endl;

    cout << "Testing DataBase class";
    if(testDataBase())
        cout << " - Success" << endl;
    else
        cout << "DataBase class - Failure" << endl;
}

bool Test::testProduct()
{
    bool result = true;
    result &= product_test.test_construct();
    result &= product_test.test_set();
    result &= product_test.test_save();
    return result;
}

bool Test::testDataBase()
{
    bool result = true;
    result &= db_test.test_construct();
    result &= db_test.test_add();
//    result &= db_test.test_set();
//    result &= db_test.test_save();
    return result;
}
