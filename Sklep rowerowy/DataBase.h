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
        const vector<Product>& get_records();
        virtual void add_record(Product new_record);
        virtual void list_records_names();
        bool get_records_data_if_exists(std::string &name, Product& p);

    protected:
        vector<Product> records;

    private:

};

#endif // DATABASE_H
