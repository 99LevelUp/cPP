#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(): _name("")
{
//    this->_name=""; same shit
std::cout << "Obiectul Zombie cu numele " << getName() << " a fost creat!" << std::endl; 
}

Zombie::Zombie(std::string name)//: _name(name) same shit
{
    this->_name = name;
    std::cout << "Obiectul Zombie cu numele " << getName() << " a fost creat!" << std::endl; 

}

std::string Zombie::getName() const
{
    return _name;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Obiectul Zombie cu numele " << getName() << " a fost distrus!" << std::endl;
}
