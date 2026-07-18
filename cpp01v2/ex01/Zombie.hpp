/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:31:59 by ggabor            #+#    #+#             */
/*   Updated: 2026/07/16 16:32:00 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
    std::string _name;


    public:
    Zombie();
    Zombie(std::string name);

    void announce();
    std::string     getName() const;
    void setName(std::string name);
    
    ~Zombie();
    

};

Zombie* zombieHorde( int N, std::string name );


#endif