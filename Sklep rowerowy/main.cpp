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
    Product prod("Name", 5.50, 10);
    Bicycle bike("Bike Name", 69.96, 3, "L");
    db.add_record(&prod);
    db.add_record(&bike);
    db.save("test.txt");
    cout << db.get() << endl;

    return 0;
}
