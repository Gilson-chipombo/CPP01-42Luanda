/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:02:25 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/03/28 18:02:26 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON
#define WEAPON

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string& getType();
        void setType(std::string type);
};
#endif

