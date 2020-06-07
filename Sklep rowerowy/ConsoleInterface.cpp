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
		 << "2 - Save data base in a file.\n"
		 << "3 - Read data base from a file.\n"
         << std::endl;
	std::cin >> answer;
	std::cin.clear();
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
			db.show();
			std::cout << "To get more data about the product enter its name: ";
			std::cin >> name;
			Product* p = db.get_product_by_name(name);
			if(p != nullptr)
            {
				p->buy_the_product();
			}
			else
			{
				std::cout << "No such product in the shop. " << std::endl;
			};
			break;
		};
		case 2:
		{
			cout << "Enter a file name: ";
			string filename;
			cin >> filename;
			db.save(filename);
			break;
		};
		case 3:
		{
			cout << "Enter a file name: ";
			string filename;
			cin >> filename;
			db.read(filename);
			break;
		};
		};
    };
};
