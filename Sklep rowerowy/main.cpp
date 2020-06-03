/**
* Name: main.cpp
* Purpose: Programowanie Objektowe - Projekt
* @author Katarzyna Glaza, Krystian Kamiñski, Konstantin Panov
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
//    string s, delimiter = ";";
//    cin >> s;
//    string token = s.substr(0, s.find(delimiter));
//    cout << token;

//    Product prod;
//    cin >> prod;
//    cout << prod.get();

    Bicycle bike;
    cin >> bike;
    cout << bike;

//    Product prod ("Product", 200, 200);
//    cout << prod;   //Product;Product;200.000000;200
//    Bicycle bike("Bicycle", 100, 100, "M"); //Bicycle;Bicycle;100.000000;100;M;
//    cout << bike.get();
//    prod.save("test.txt");

//    ifstream file;
//    file.open("test.txt");
//    string data;
//    file >> data;
//    Product prod(data);
//    prod.get();


//    bike.set_quantity(20);

//    DataBase db;
//    db.add_record(prod);
//    db.add_record(bike);
//
//    //cout << db.get_records();
//
//    ConsoleInterface cons_int;
//    cons_int.users_choices(db);
    return 0;
}
