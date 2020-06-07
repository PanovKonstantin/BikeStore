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
        virtual string get();
        virtual void add_record(Product* new_record);
        virtual void list_records_names();
        friend istream &operator>>( istream  &input, DataBase &DB);
        friend ostream &operator<<(ostream &output, DataBase &DB);
        virtual void read(string filename);
        virtual void read_record(string data);
        virtual void save(string filename);
		Product* get_product_by_name(std::string &name);


    protected:
        vector<Product*> records;

    private:

};

#endif // DATABASE_H
