#include "ConsoleInterface.h"
#include "DataBase.h"
#include <iostream>

ConsoleInterface::ConsoleInterface()
{
    //ctor
}

ConsoleInterface::~ConsoleInterface()
{
    //dtor
}

int ConsoleInterface::users_options()
{
	int answer;
	std::cout << "\n\nChoose number:\n"
		 << "0 - Quit.\n"
		 << "1 - Show the list of the products available in the shop.\n"
         << std::endl;
	std::cin >> answer;
	return answer;
};

void ConsoleInterface::users_choices(DataBase& db)
{
    int answer = 0;
    bool chosen_quit = false;
	while(!chosen_quit)
    {
		int choice = users_options();
        switch(choice)
        {
        case 0:
        {
            std::cout << "You left the shop.";
            chosen_quit = true;
            break;
        };
        case 1:
        {
            string name;
            db.list_records_names();
            std::cout << "To get more data about the product enter its name: ";
            std::cin >> name;
            Product p;
            bool ok = db.get_records_data_if_exists(name, p);
            if(ok)
            {
                std::cout << p.get() << std::endl;
            }
            else
            {
                std::cout << "No such product. " << std::endl;
            };
            break;
        };
        };
    };
};
