/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:33:04 by ggabor            #+#    #+#             */
/*   Updated: 2026/07/16 16:33:05 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{
}

const std::string& Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}