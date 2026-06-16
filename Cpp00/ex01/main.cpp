#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook   pb;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break; // handle EOF / Ctrl+D

        if (command == "ADD")
        {
            pb.addContact();
        }
        else if (command == "SEARCH")
        {
            pb.searchContacts();
        }
        else if (command == "EXIT")
        {
            break;
        }
        // any other input is ignored
    }

    return 0;
}