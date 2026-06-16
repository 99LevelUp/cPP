#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

// helper to format one field for the SEARCH table
static std::string formatField(const std::string &s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

PhoneBook::PhoneBook()
{
    _count = 0;
    _nextIndex = 0;
}

void PhoneBook::addContact()
{
    _contacts[_nextIndex].setFromInput();

    if (_count < 8)
        _count++;

    _nextIndex = (_nextIndex + 1) % 8;
}

void PhoneBook::searchContacts() const
{
    if (_count == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    // table header
    std::cout << std::setw(10) << "Index"      << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name"  << "|"
              << std::setw(10) << "Nickname"   << std::endl;

    // table rows
    for (int i = 0; i < _count; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(_contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(_contacts[i].getLastName())  << "|"
                  << std::setw(10) << formatField(_contacts[i].getNickname())  << std::endl;
    }

    // ask for index
    std::cout << "Enter index of contact to display: ";
    std::string input;

    if (!std::getline(std::cin, input))
        return;

    // very basic validation: one digit 0..7
    if (input.length() != 1 || input[0] < '0' || input[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    int index = input[0] - '0';

    if (index < 0 || index >= _count)
    {
        std::cout << "Index out of range." << std::endl;
        return;
    }

    _contacts[index].printFull();
}