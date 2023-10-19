/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:10:59 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 11:18:30 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal()
{
    type = "animal";
   std::cout<<"Animal 's Default constructor called "<<std::endl;
}

Animal:: Animal(std::string h) 
{
    type = h;
    std::cout<<"Constructor paramatrized called\n";
}

Animal :: ~Animal()
{
    std::cout << "destructor called\n";
}

Animal::Animal( const Animal &other)
{
    std::cout<<"copy constructor called\n";
    *this = other;
}

Animal& Animal :: operator=(const Animal& other) 
{
    std::cout <<"Copy assignment operator called \n";
    type = other.type;
    return *this;
}

std::string Animal::getType()const
{
    return(type); 
}
void    Animal::setType(std::string h)
{
    type = h;
}
void Animal:: makeSound()const
{
    std::cout<<"Sound not define"<<std::endl;
}