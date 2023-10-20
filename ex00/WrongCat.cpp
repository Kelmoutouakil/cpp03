/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:32:51 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 10:03:36 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
   std::cout<<"WrongCat 's Default constructor called "<<std::endl;
}

WrongCat:: WrongCat(std::string h) 
{
    h = "WrongCat";
    type = h;
    std::cout<<" WrongCat 's Constructor paramatrized called\n";
}

WrongCat :: ~WrongCat()
{
    std::cout << "WrongCat 's destructor called\n";;
}

WrongCat::WrongCat( const WrongCat &other)
{
    std::cout<<" WrongCat s' copy constructor called\n";
    *this = other;
}

WrongCat& WrongCat :: operator=(const WrongCat& other) 
{
    std::cout <<"WrongCat 's Copy assignment operator called \n";
    if(this != &other)
        type = other.type;
    return *this;
}
void WrongCat:: makeSound()const
{
    std::cout<<"WrongCat make sound ..."<<std::endl;
}