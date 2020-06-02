#ifndef CONSOLEINTERFACE_H
#define CONSOLEINTERFACE_H
#include "DataBase.h"

class ConsoleInterface
{
    public:
        ConsoleInterface();
        virtual ~ConsoleInterface();
        virtual int users_options();
        virtual void users_choices(DataBase& db);

    protected:

    private:
};

#endif // CONSOLEINTERFACE_H
