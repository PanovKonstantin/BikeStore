/**
* Name: main.cpp
* Purpose: Programowanie Objektowe - Projekt
* @author Katarzyna Glaza, Krystian Kami�ski, Konstantin Panov
* @version 0.1
*/
#include <iostream>
#include "DataBase.h"
#include "Product.h"
#include "Bicycle.h"
#include "ConsoleInterface.h"

using namespace std;

int main()
{
    Product prod ("Product", 200, 200);
    Bicycle bike("Bicycle", 100, 100, "M");
    bike.set_quantity(20);

    DataBase db;
    db.add_record(prod);
    db.add_record(bike);

    //cout << db.get_records();

    ConsoleInterface cons_int;
    cons_int.users_choices(db);
    return 0;
}
