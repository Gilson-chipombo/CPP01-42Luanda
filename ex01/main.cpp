/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:21:39 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/15 17:25:21 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name);

int main()
{
    int N = 10;

    Zombie* zombies = ZombieHorde(N, "Gilson");
    
    for (int i = 0; i < N; i++) zombies[i].announce(); 
    delete[] zombies;
}