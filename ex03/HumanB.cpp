/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:02:11 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/16 17:28:45 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << this->name << ": destroyed." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(){
    std::cout << this->name << ": attacks with their " << weapon->getType() << std::endl;
}