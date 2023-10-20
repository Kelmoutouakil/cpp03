/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:09:45 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 10:03:18 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
   std::cout<<"WrongAnimal 's Default constructor called "<<std::endl;
}

WrongAnimal:: WrongAnimal(std::string h) 
{
    type = h;
    std::cout<<"Constructor paramatrized called\n";
}

WrongAnimal :: ~WrongAnimal()
{
    std::cout << "destructor called\n";;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other)
{
    std::cout<<"copy constructor called\n";
    *this = other;
}

WrongAnimal& WrongAnimal :: operator=(const WrongAnimal& other) 
{
    std::cout <<"Copy assignment operator called \n";
    if(this != &other)
        type = other.type;
    return *this;
}

std::string WrongAnimal::getType()const
{
    return(type); 
}
void    WrongAnimal::setType(std::string h)
{
    type = h;
}
void WrongAnimal:: makeSound()const
{
    std::cout<<"Sound not define"<<std::endl;
}