/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:02:29 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/03/29 17:24:28 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Replace.hpp"
int main(int ac, char **av)
{   
    if(ac != 4)
        return (0);
    Replace r;
    r.setS1(av[2]);
    r.setS2(av[3]);
    r.setFilename(av[1]);
    r.ft_replace();
}
































//https://drawsql.app/teams/kandengues-code/diagrams/mapazzz