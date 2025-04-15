/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbravo-f <gbravo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:20:51 by gbravo-f          #+#    #+#             */
/*   Updated: 2025/04/15 17:20:52 by gbravo-f         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Replace.hpp"

Replace::Replace(){}
Replace::~Replace(){}

void Replace::setS1(std::string s){
    this->s1 = s;
}
void Replace::setS2(std::string s){
    this->s2 = s;
}
void Replace::setFilename(std::string name){
    this->filename = name;
}

void Replace::ft_replace() 
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cerr << "Erro ao abrir o ficheiro!->"<< filename << std::endl;
        return ;
    }
    std::string newFile = filename + ".replace";
    std::ofstream outputFile(newFile.c_str());

    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            outputFile << line.substr(0, pos);
            outputFile << s2;
            pos += s1.length();
            line = line.substr(pos);
            pos = 0;
        }
        outputFile << line << "\n";
    }
    inputFile.close();
    outputFile.close();

    std::cout << newFile<< " Created" << std::endl;
}