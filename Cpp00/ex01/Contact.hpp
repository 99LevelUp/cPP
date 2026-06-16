#ifndef CONTACT_HPP   
#define CONTACT_HPP

#include <string>

class Contact //class=keyword to declare a class, Contact is the nae of this new type
{
    private: // an acces specifier, everything declare after this line until public is private
            //code in main or in Phonebook cannot touch these members directly
    std::string     _firstName; // each line defines a member variable of type std::string
    std::string     _lastName; // hold the lastname
    std::string     _nickname; // hold the nickname etc
    std::string     _phoneNumber; // only functions inside Contact can access _fistName, _lastName etc
    std::string     _darkestSecret; // external code must go through public method 
            // the leading _ in the mane is just a naming convention to mark this is a member variable of the class

    public: // start the public section. another access specifier. public members can be accessed from anywhere 
    Contact(); // this is the constructor of the class. the same name as the cass and no return type
    //public methods
    void    setFromInput(); // will ask the use to type first name, last name ....
    void    printFull() const; // will print all the contact data, const means"this method promises not to modify the object

    std::string     getFirstName()  const; // returns a copy of the _firstName, const means calling this function does not change the contact
    std::string     getLastName()   const; // because the variabile are private  Phonebook and other code cannot do contact._firstName
    std::string     getNickname()   const; // but they can do contact.getFirstName() to read the value
};                                         // these getter will be used when printing the SEARCH table

#endif