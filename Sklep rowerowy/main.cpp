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

using namespace std;

int main()
{
    DataBase db;
    db.read("test.txt");
    cout << db.get() << endl;

    return 0;
}
