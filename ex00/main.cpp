/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:22:55 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/15 17:22:56 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

int main()
{
    Zombie z("Foo");
    z.announce();

    Zombie* zb = newZombie("Gilson");
    zb->announce();
   
    randomChump("Fredy");
   
    delete zb;
}