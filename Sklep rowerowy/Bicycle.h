#ifndef BICYCLE_H
#define BICYCLE_H
#include "Product.h"
using namespace std;

class Bicycle : public Product
{
    public:

        /**
        * Bicycle default constructor.
        */
        Bicycle();

        /**
        * Bicycle constructor. Sets every field of the object with given value.
        * @param name a string - given value for name field.
        * @param price a float - given value for price field.
        * @param quantity an int - given value for quantity field.
        * @param bicycle_size a string - given value for bicycle_size field.
        */
        Bicycle(string name, float price, int quantity, string bicycle_size);

        /**
        * Bicycle constructor. Sets every field of the object based on a string.
        * @param data a string - text with information about every field of the object.
        */
        Bicycle(string data);

        /**
        * Bicycle Destructor.
        */
        virtual ~Bicycle();

        /**
        * Bicycle set_all() method. Sets every field of the object based on a string.
        * @param data a string - text with information about every field of the object.
        */
        virtual void set_all(string data);
        virtual void save(string filename);
        virtual void read(string filename);
        friend ostream &operator<<(ostream &output, Bicycle &B);
        friend istream &operator>>( istream  &input, Bicycle &B);
        virtual string get();
        void * operator new(size_t size);
        void operator delete(void * p);

    protected:

    private:
        string bicycle_size;
};

#endif // BICYCLE_H
