#ifndef BICYCLE_H
#define BICYCLE_H
#include "Product.h"
using namespace std;

class Bicycle : public Product
{
    public:
        Bicycle();
        Bicycle(string new_name, float new_price, int new_quantity, string new_bicycle_size);
        Bicycle(string data);
        virtual ~Bicycle();
        void set_all(string data);
        virtual void save(string filename);
        virtual void read(string filename);
        friend ostream &operator<<(ostream &output, Bicycle &B);
        friend istream &operator>>( istream  &input, Bicycle &B);
        virtual string get() override;

    protected:

    private:
        string bicycle_size;
};

#endif // BICYCLE_H
