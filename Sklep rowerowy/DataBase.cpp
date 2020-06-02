#include "DataBase.h"
#include "Product.h"
#include <iostream>

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
};
/*
string DataBase::get_records()
{
    string info = "";
    for(int i = 0; i < records.size(); ++i)
    {
        info += records[i].get() + "\n";
    }
    return info;
};
*/
const vector<Product>& DataBase::get_records()
{
    return records;
};

void DataBase::list_records_names()
{
    for(int i = 0; i < records.size(); ++i)
    {
        cout << records[i].get_name() << std::endl;
    }
};

bool DataBase::get_records_data_if_exists(std::string &name, Product& p)
{
    for(int i=0; i < records.size(); ++i)
    {
        if(name.compare(records[i].get_name()) == 0)
        {
            p = records[i];
            return true;
        };
    };
    return false;
};
