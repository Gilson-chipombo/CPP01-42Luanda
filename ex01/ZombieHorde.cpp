/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:22:18 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/15 17:22:19 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N; i++) new (&zombies[i]) Zombie(name); //placement new
    return (zombies);
}