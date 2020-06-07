/**
* Name: main.cpp
* Purpose: Programowanie Objektowe - Projekt
* @author Katarzyna Glaza, Krystian Kamiński, Konstantin Panov
* @version 0.3
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
//    Test test;
//    test.start();


    ConsoleInterface ui;
    DataBase db;
    db.read("test.txt");
    ui.users_choices(db);
    return 0;
}
