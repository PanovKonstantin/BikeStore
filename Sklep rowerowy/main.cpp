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
	DataBase db;
	db.read("test.txt");

	Product prod("Name0", 5.50, 10);
	Bicycle bike("BikeName0", 69.96, 3, "L");
	db.add_record(&prod);
	db.add_record(&bike);


	cout << db.get() << endl;

	ConsoleInterface cons_int;
	cons_int.users_choices(db);

	db.save("test.txt");
    return 0;
}
