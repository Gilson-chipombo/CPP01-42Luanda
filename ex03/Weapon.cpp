/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:02:22 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/16 17:21:41 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string&  Weapon::getType(){
    return type;
}

void Weapon::setType(std::string type){
    this->type = type;
}

Weapon::~Weapon()
{
}
