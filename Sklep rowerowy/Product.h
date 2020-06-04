#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

/**
* A Product class. Represents an product in a store.
* @param type a string - Names a subclass of the product.
* @param name a string - Name of the product.
* @param price a float - Price of the product.
* @param quantity an int - Amount of products of that type in a store.
*/
class Product
{
protected:
    string type;
    string name;
    float price;
    int quantity;

public:
    /**
    * Product default constructor.
    */
    Product();

    /**
    * Product constructor.
    * @param name a string - Given name of the product.
    * @param price a float - Given price of the product.
    * @param quantity an int - Given amount of products in a store.
    */
    Product(string name, float price, int quantity);

    /**
    * Product constructor from a string of information.
    * @param data a string - Information about a constructed product.
    */
    Product(string data);

    /**
    * Product destructor.
    */
    virtual ~Product();

    /**
    * Product get() method. Returns string with information about state of the object.
    */
    virtual string get();

    /**
    * Product get_name() method. Returns name field of the object.
    */
    virtual string get_name();

    /**
    * Product get_price() method. returns price field of the object.
    */
    virtual float get_price();

    /**
    * Product get_quantity() method. Returns quantity field of the object.
    */
    virtual int get_quantity();

    /**
    * Product set_all() method. Sets new value for all fields of the object.
    * @param name a string - A new give name of the product.
    * @param price a float - A new given price of the product.
    * @param quantity an int - A new given quantity of the product in a store.
    */
    void set_all(string name, float price, int quantity);

    /**
    *   Product set_all() method. Sets new value for all fields of the object.
    * @param data a string - A string with information about every field of the product.
    */
    void set_all(string data);

    /**
    * Product set_name() method. Sets a new value for a name field of the product.
    * @param name a string - New name of the product.
    */
    virtual void set_name(string name);

    /**
    * Product set_price() method. Sets a new value for a price field of the product.
    * @param price a float - New price of the product.
    */
    virtual void set_price(float price);

    /**
    * Product set_quantity() method. Sets new value for a quantity field of the product.
    * @param quantity an int - New quantity of the product.
    */
    virtual void set_quantity(int quantity);

    /**
    * Product change_quantity() method. Changes value of the quantity field by given value.
    * @param change an int - Value that quantity field gets changed by.
    */
    virtual void change_quantity(int change);

    /**
    * Product save() method. Saves information about product state in a given file.
    * @param filename a string - name of the file, in which product gets saved int.
    */
    virtual void save(string filename);

    /**
    * Product read() method. Reads information about product from text file.
    * @param filename a string - name of the text file.
    */
    virtual void read(string filename);

    /**
    * Overloaded output operator. Returns get() method result.
    * @param output a reference for ostream object - output stream.
    * @param P a reference for Product object.
    */
    friend ostream &operator<<(ostream &output, Product &P);

    /**
    * Overloaded input operator. Takes a string and calls set_all() method with it.
    * @param input a reference for istream object - input stream.
    * @param P a reference for Product object.
    */
    friend istream &operator>>( istream  &input, Product &P);

    /**
    * Overloaded new operator.
    */
    void * operator new(size_t size);

    /**
    * Overloaded delete operator.
    */
    void operator delete(void * p);
};

#endif // PRODUCT_H
