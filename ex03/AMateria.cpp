/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:53:36 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:31:41 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria :: AMateria(std::string  h) 
{
    std::cout<<" Ameteria 's constructor called"<< std::endl;
    type = h;
  
}

std::string const & AMateria::getType() const
{
    return (type);
}//Returns the materia type
AMateria ::~AMateria()
{
    std::cout<<" destructor called"<< std::endl;
}
void AMateria:: use(ICharacter& target)
{
    (void)target;    
} 
































