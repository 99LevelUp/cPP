/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:31:34 by ggabor            #+#    #+#             */
/*   Updated: 2026/07/16 16:31:35 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::string name = "Zorro";
    
    Zombie* zzz = zombieHorde(4, name);
    for(int i = 0; i <= 3; i++)
    {
        zzz->announce();
    }
    delete[] zzz;
   
}