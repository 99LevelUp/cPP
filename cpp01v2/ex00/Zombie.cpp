/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:31:22 by ggabor            #+#    #+#             */
/*   Updated: 2026/07/16 16:31:23 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(): _name("")
{

std::cout << "Zombie object named " << getName() << " was created!" << std::endl; 
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie object named " << getName() << " was created!" << std::endl; 

}

std::string Zombie::getName() const
{
    return _name;
}

void Zombie::announce()
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie object named " << getName() << " was destroyed!" << std::endl;
}
