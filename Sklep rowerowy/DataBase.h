#ifndef DATABASE_H
#define DATABASE_H
#include <vector>
#include "Product.h"
using namespace std;


class DataBase
{
    public:
        DataBase();
        virtual ~DataBase();
        //virtual string get_records();
        virtual string get();
//        const vector<Product>& get_records();
        virtual void add_record(Product* new_record);
//        virtual void add_record(Product new_record);
        virtual void list_records_names();
        bool get_records_data_if_exists(std::string &name, Product& p);
        friend istream &operator>>( istream  &input, DataBase &DB);
        friend ostream &operator<<(ostream &output, DataBase &DB);
        virtual void read(string filename);
        virtual void read_record(string data);
        virtual void save(string filename);


    protected:
        vector<Product*> records;

    private:

};

#endif // DATABASE_H
