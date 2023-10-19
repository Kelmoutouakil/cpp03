/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:20:37 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 11:05:08 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
   std::cout<<"Cat 's Default constructor called "<<std::endl;
}

Cat:: Cat(std::string h) 
{
    h = "Cat";
    type = h;
    std::cout<<" Cat 's Constructor paramatrized called\n";
}

Cat :: ~Cat()
{
    std::cout << "Cat 's destructor called\n";;
}

Cat::Cat( const Cat &other)
{
    std::cout<<" Cat s' copy constructor called\n";
    *this = other;
}

Cat& Cat :: operator=(const Cat& other) 
{
    std::cout <<"Cat 's Copy assignment operator called \n";
    type = other.type;
    return *this;
}
void Cat:: makeSound()const
{
    std::cout<<"Cat make sound ..."<<std::endl;
}
