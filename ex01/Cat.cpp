/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:20:37 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 14:29:41 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
       std::cout<<"Cat 's Default constructor called "<<std::endl;
    type = "Cat";
    brain = new Brain();
    if(!brain)
        std::cout <<"new failled\n";

}


Cat :: ~Cat()
{
    std::cout << "Cat 's destructor called\n";
    delete brain;
}

Cat::Cat( const Cat &other)
{
    std::cout<<" Cat s' copy constructor called\n";
    brain = new Brain();
    if(!brain)
        std::cout <<"new failled\n";
    *this = other;
}

Cat& Cat :: operator=(const Cat& other) 
{
    std::cout <<"Cat 's Copy assignment operator called \n";
    if(this != &other)
    {
        type = other.type;
        *brain = *other.brain;
    }
    return *this;
}
void Cat:: makeSound()const
{
    std::cout<<"Cat make sound ..."<<std::endl;
}
