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
    //dtor
}

void DataBase::add_record(Product new_record)
{
    records.push_back(new_record);
};

string DataBase::get()
{
    string info = "";
    for(int i = 0; i < records.size(); ++i)
    {
        Product *record = &records[i];
        info += record->get() + "\n";
    }
    return info;
};

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

//istream &operator>>( istream  &input, DataBase &DB){
//    string data;
//    input >> data;
//    P.set_all(data);
//    return input;
//}

ostream &operator<<(ostream &output, DataBase &DB)
{
    output << DB.get();
    return output;
}

void DataBase::read(string filename)
{
    ifstream file;
    file.open(filename);
    string line, type;
    while(getline(file, line))
    {
        type = line.substr(0, line.find(";"));
        if (type == "Product")
            add_record(Product(line));
        else if (type == "Bicycle")
            add_record(Bicycle(line));
    }
}
