#include "DataBase.h"
#include "Product.h"
#include "Bicycle.h"
#include <iostream>
#include <fstream>

DataBase::DataBase()
{
    //ctor
}

DataBase::~DataBase()
{
    for (auto record : records)
    {
        delete record;
    }
}

void DataBase::add_record(Product* new_record)
{
    records.push_back(new_record);
};
//
//void DataBase::add_record(Product new_record)
//{
//    records.push_back(&new_record);
//};

string DataBase::get()
{
    string info = "";
    for(auto record : records)
        info += record->get() + "\n";
    return info;
};

//const vector<Product>& DataBase::get_records()
//{
//    return records;
//};

void DataBase::list_records_names()
{
    for(int i = 0; i < records.size(); ++i)
    {
        cout << records[i]->get_name() << std::endl;
    }
};

bool DataBase::get_records_data_if_exists(std::string &name, Product& p)
{
    for(int i=0; i < records.size(); ++i)
    {
        if(name.compare(records[i]->get_name()) == 0)
        {
            p = *records[i];
            return true;
        };
    };
    return false;
};

istream &operator>>( istream  &input, DataBase &DB){
    string line;
    while(getline(input, line))
    {
        DB.read_record(line);
    }
    return input;
}

ostream &operator<<(ostream &output, DataBase &DB)
{
    output << DB.get();
    return output;
}

void DataBase::read(string filename)
{
    ifstream file;
    file.open(filename);
    file >> *this;
}
void DataBase::read_record(string data)
{
    string type;
    type = data.substr(0, data.find(";"));
    if (type == "Product")
    {
        Product * p = new Product(data);
        add_record(p);
    }
    else if (type == "Bicycle")
    {
        Bicycle * p = new Bicycle(data);
        add_record(p);
    }
}

void DataBase::save(string filename)
{
    ofstream file;
    file.open(filename);
    file << *this;
}
