/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:31:07 by ggabor            #+#    #+#             */
/*   Updated: 2026/07/16 16:48:37 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name = "John";
  
    randomChump(name);
    //std::cout <<"Test john" <<std::endl;

    //std::cout <<"Before heap allocation" <<std::endl;
    Zombie *zoom = newZombie(name);
    zoom->announce();  // l
   
    //std::cout <<"after heap allocation" <<std::endl;
    delete zoom;
}