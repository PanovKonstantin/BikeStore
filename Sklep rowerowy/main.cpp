#include <iostream>
#include <DataBase.h>
#include <Product.h>
#include <Bicycle.h>
using namespace std;

int main()
{
    Product prod ("Product", 200, 200);
    Bicycle bike("Bicycle", 100, 100, "M");
    bike.set_quantity(20);
    DataBase db;
    db.add_record(prod);
    db.add_record(bike);
    cout << db.get_records();
    return 0;
}
