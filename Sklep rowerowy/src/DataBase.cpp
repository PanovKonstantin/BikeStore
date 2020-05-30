#include "DataBase.h"
#include "Product.h"

DataBase::DataBase()
{
    //ctor
}

DataBase::~DataBase()
{
    //dtor
}

void DataBase::add_record(Product new_record)
{
    records.push_back(new_record);
}

string DataBase::get_records()
{
    string info = "";
    for(int i = 0; i < records.size(); ++i)
    {
        info += records[i].get() + "\n";
    }
    return info;
}
