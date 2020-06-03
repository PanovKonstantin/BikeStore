#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;


class Product
{
    public:
        static unsigned int amount;
        Product();
        Product(string new_name, float new_price, int new_quantity);
        Product(string filename);
        virtual ~Product();
        virtual string get();
        virtual string get_name();
        virtual float get_price();
        virtual int get_quantity();
        void set_all(string new_name, float new_price, int new_quantity);
        void set_all(string data);
        virtual void set_name(string new_name);
        virtual void set_price(float new_price);
        virtual void set_quantity(int new_quantity);
        virtual void change_quantity(int change);
        virtual void save(string filename);
        virtual void read(string filename);
        friend ostream &operator<<(ostream &output, Product &P);
        friend istream &operator>>( istream  &input, Product &P);

    protected:
        string type;
        string name;
        float price;
        int quantity;

    private:
};

#endif // PRODUCT_H
