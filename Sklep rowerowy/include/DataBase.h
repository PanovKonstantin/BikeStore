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
        virtual string get_records();
        virtual void add_record(Product new_record);

    protected:
        vector<Product> records;

    private:

};

#endif // DATABASE_H
