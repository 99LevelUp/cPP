#include "Zombie.hpp"
// functia aceasta declara un obiect dinamic
// durata vietii a acestui obiect este pana cand se distruge cu DELETE
// daca obiectul nu este distrus rezuta MEMORY LEAK
Zombie* newZombie( std::string name )
{
    Zombie  *zoom = new Zombie(name);

    return zoom;
}
