#ifndef RECORD_H
#define RECORD_H
#include <string>

using namespace std;

class Record
{
    public:

        /**
        * Record pure virtual get() method. Returns string with information about state of an record.
        */
        virtual string get() = 0;

        /**
        * Record pure virtual set_all() method. Sets every field of an record based on string argument.
        * @param data a string - text with information about an record.
        */
        virtual void set_all(string data) = 0;

        /**
        * Record pure virtual save() method.. Saves result of get() method in a text file.
        * @param filename a string - name of a text file.
        */
        virtual void save(string filename) = 0;

        /**
        * Record pure virtual read() method. Sets new values for object fields based on text file.
        * @param filename a string - name of a text file.
        */
        virtual void read(string filename) = 0;
    protected:

    private:
};

#endif // RECORD_H
