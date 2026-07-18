/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:32:40 by ggabor            #+#    #+#             */
/*   Updated: 2026/07/16 16:32:41 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : name(name), weapon(weapon)
{
}

void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their "
              << this->weapon.getType() << std::endl;
}