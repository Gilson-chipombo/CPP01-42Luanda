/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:01:36 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/16 17:28:42 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMAN_B
#define HUMAN_B
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        void attack();
};
#endif