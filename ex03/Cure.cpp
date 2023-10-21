/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:37:42 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:31:07 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure :: Cure() 
{
    type = "cure";
    std::cout<< "Cure 's constructor called"<<std::endl;
}

void Cure :: use(ICharacter& target)
{
    
    std::cout << " * shoots an Cure bolt at "<< target.getName() << " *" << std::endl;
}

Cure * Cure:: clone() const
{
    Cure * N = new Cure();

    if(!N)
        return NULL;
    return(N);
}
Cure ::~ Cure()
{
    std::cout<<" Cure 's destructor is called" << std::endl;
}