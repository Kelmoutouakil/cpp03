/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:24:02 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 10:02:53 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
   std::cout<<"Dog 's Default constructor called "<<std::endl;
}

Dog:: Dog(std::string h) 
{
    h = "Dog";
    type = h;
    std::cout<<" Dog 's Constructor paramatrized called\n";
}

Dog :: ~Dog()
{
    std::cout << "Dog 's destructor called\n";;
}

Dog::Dog( const Dog &other)
{
    std::cout<<" Dog s' copy constructor called\n";
    *this = other;
}

Dog& Dog :: operator=(const Dog& other) 
{
    std::cout <<"Dog 's Copy assignment operator called \n";
    if(this != &other)
        type = other.type;
    return *this;
}

void Dog::makeSound()const
{
    std::cout<<"Dog make sound"<<std::endl;
}