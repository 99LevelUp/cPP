#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name = "Gicu";
    std::cout <<"test" <<std::endl;
    randomChump(name);
    std::cout <<"test2" <<std::endl;

    std::cout <<"test" <<std::endl;
    Zombie *zoom = newZombie(name);
    zoom->announce();  // la alocare dimamica se foloseste ->
   
    std::cout <<"test2" <<std::endl;
     delete zoom;
}