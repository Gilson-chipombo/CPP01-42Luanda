/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:23:11 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/15 17:23:12 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>

class Zombie
{
    private:
    std::string name;
    public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);