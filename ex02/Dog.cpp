/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:24:02 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 14:30:20 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog 's Default constructor called "<<std::endl;
    type = "Dog";
    brain = new Brain();
    if(!brain)
        std::cout <<"new failled\n";
   
}


Dog :: ~Dog()
{
    std::cout << "Dog 's destructor called\n";
    delete brain;
}

Dog::Dog( const Dog &other)
{
    std::cout<<" Dog s' copy constructor called\n";
    brain = new Brain();
    if(!brain)
        std::cout <<"new failled\n";
    *this = other;
}

Dog& Dog :: operator=(const Dog& other) 
{
    std::cout <<"Dog 's Copy assignment operator called \n";
    if(this != &other)
    {
        type = other.type;
        *brain = *other.brain;
    }
    return *this;
}

void Dog::makeSound()const
{
    std::cout<<"Dog make sound"<<std::endl;
}