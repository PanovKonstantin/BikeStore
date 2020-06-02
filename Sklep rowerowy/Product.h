#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;


class Product
{
    public:
        static unsigned int amount;
        Product();
        Product(string new_name, float new_price, unsigned int new_quantity);
        virtual ~Product();
        virtual string get();
        virtual string get_name();
        virtual float get_price();
        virtual unsigned int get_quantity();
        virtual void set_all(string new_name, float new_price, unsigned int new_quantity);
        virtual void set_name(string new_name);
        virtual void set_price(float new_price);
        virtual void set_quantity(unsigned int new_quantity);
        virtual void change_quantity(int change);
        virtual void save(string filename);
//        virtual void read(string filename);

    protected:
        string type;
        string name;
        float price;
        unsigned int quantity;

    private:
};

#endif // PRODUCT_H
