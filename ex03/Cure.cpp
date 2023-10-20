/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:37:42 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 11:41:31 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure :: Cure(std::string const & type) : AMateria("cure")
{
    std::cout<< "Cure 's constructor called"<<std::endl;
}

void Cure :: use(ICharacter& target)
{
    std::cout << " * heals "<< target.getName() << "’s wounds *" << std::endl;
}

Cure * Cure:: clone() const
{
    Cure * N = new Cure(type);
    if(!N)
        return NULL;
    return(N);
}