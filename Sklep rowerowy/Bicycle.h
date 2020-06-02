#ifndef BICYCLE_H
#define BICYCLE_H
#include "Product.h"
using namespace std;

class Bicycle : public Product
{
    public:
        Bicycle();
        Bicycle(string new_name, float new_price, unsigned int new_quantity, string new_bicycle_size);
        virtual ~Bicycle();
        string get();

    protected:

    private:
        string bicycle_size;
};

#endif // BICYCLE_H
