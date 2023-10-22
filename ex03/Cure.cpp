/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:37:42 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/22 16:24:24 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure :: Cure() 
{
    type = "cure";
    std::cout<< "Cure 's constructor called"<<std::endl;
}
Cure::Cure( const Cure &other)
{
    std::cout<<" Cure s' copy constructor called\n";
    *this = other;
}

Cure& Cure :: operator=(const Cure& other)  
{
    std::cout <<"Cure 's Copy assignment operator called \n";
    if(this != &other)
    {
       type = other.type;
    }
    return *this;
}

void Cure :: use(ICharacter& target)
{
    std::cout << " * heals "<< target.getName() << "'s wounds *" << std::endl;
}

Cure * Cure:: clone() const
{
    Cure * N = new Cure();

    if(!N)
        return NULL;
    return(N);
}
Cure ::~Cure()
{
    std::cout<<" Cure 's destructor is called" << std::endl;
}