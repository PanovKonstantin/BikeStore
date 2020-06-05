#include "DataBase.h"
#include "TestProduct.h"
#include "Record.h"
#include "Bicycle.h"
#include "ConsoleInterface.h"
#include "Test.h"

Test::Test(){}

Test::~Test(){}

bool Test::testProduct()
{
    bool result = true;
    result &= product_test.test_construct();
    result &= product_test.test_set();
    result &= product_test.test_save();
    return result;
}
