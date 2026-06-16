#include "Contact.hpp"
#include <string>
#include <iostream>


Contact::Contact()
{
    _firstName = "";
    _lastName = "";
    _nickname = "";
    _phoneNumber = "";
    _darkestSecret = "";
}

void Contact::setFromInput()
{
    std::cout << "Enter first name: "; //print the question on the scree
    std::getline(std::cin, _firstName); // after the input, put the text directlu into the member variable

    std::cout << "Enter last name: ";
    std::getline (std::cin, _lastName);

    std::cout << "Enter nickname: ";
    std::getline (std::cin, _nickname);

    std::cout << "Enter phone number: ";
    std::getline (std::cin, _phoneNumber);

    std::cout << "Enter secret: ";
    std::getline (std::cin, _darkestSecret);
}
void Contact::printFull() const
{
    std::cout << "First name: "     << _firstName       << std::endl;
    std::cout << "Last name: "      << _lastName        << std::endl;
    std::cout << "Nickname: "       << _nickname        << std::endl;
    std::cout << "Phone number: "   << _phoneNumber     << std::endl;
    std::cout << "Darkest secret: " << _darkestSecret   << std::endl; 
}

std::string Contact::getFirstName() const
{
    return _firstName;
}

std::string Contact::getLastName() const
{
    return _lastName;
}

std::string Contact::getNickname() const
{
    return _nickname;
}