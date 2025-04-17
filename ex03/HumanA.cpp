/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:01:56 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/16 14:29:29 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"

HumanA::HumanA(std::string Hname, Weapon &arma) : name(Hname), weapon(arma){}

HumanA::~HumanA()
{  
    std::cout << this->name << ": destroyed.\n" << std::endl;
}

void HumanA::attack(){
     std::cout << this->name << ": attacks with their " << weapon.getType() << std::endl;
}