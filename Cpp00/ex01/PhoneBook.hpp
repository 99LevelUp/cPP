#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact     _contacts[8]; //fixed array of 8 conacts
    int         _count; // how many contacts are currently stored
    int         _nextIndex; // where the next added contact will be written(0..7)

    public:
    PhoneBook();

    void addContact();
    void searchContacts() const;

};


#endif