/**
* Name: main.cpp
* Purpose: Programowanie Objektowe - Projekt
* @author Katarzyna Glaza, Krystian Kamiński, Konstantin Panov
* @version 0.1
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "DataBase.h"
#include "Product.h"
#include "Bicycle.h"
#include "ConsoleInterface.h"
#include "Test.h"

using namespace std;

int main()
{
    Test test;
    cout << test.testProduct();
    return 0;
}
