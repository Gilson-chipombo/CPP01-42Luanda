/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:02:04 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/03/28 18:02:05 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMAN_A
#define HUMAN_A
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &arma);
        ~HumanA();
        void attack();
};

#endif

