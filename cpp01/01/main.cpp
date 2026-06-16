#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name = "Gicu";
    
    Zombie* zzz = zombieHorde(4, name);
    for(int i = 0; i <= 3; i++)
    {
        zzz->announce();
    }
    delete[] zzz;
   
}