/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:53:36 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 13:25:12 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria :: AMateria(std::string const& h) : type(h)
{
    std::cout<<" Ameteria 's constructor called"<< std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);
}//Returns the materia type

void AMateria:: use(ICharacter& target)
{
    std::cout<< "* not define for amateria at " << target.getName()<<std::endl;
}