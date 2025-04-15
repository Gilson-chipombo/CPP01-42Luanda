/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:20:54 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/15 17:21:00 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
    private:
        std::string s1;
        std::string s2;
        std::string filename;
    public:
        Replace();
        ~Replace();
        void setS1(std::string s);
        void setS2(std::string s);
        void setFilename(std::string filename);
        void ft_replace();
};