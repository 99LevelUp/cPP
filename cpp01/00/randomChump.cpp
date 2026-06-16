#include "Zombie.hpp"
// functia creeaza iterativ un obiect de tipul zombie
// un obiect iterativ are ca si durata a vietii function scope(traieste pana functia se termina)
void randomChump( std::string name )
{
    Zombie  chump(name);
    chump.announce();
}