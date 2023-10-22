/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:42:43 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:23:48 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP 
#include <iostream>
class ICharacter;

class AMateria
{
    protected:
        std::string  type;
    public:
    AMateria(){}
    AMateria(std::string const&  h);
    virtual ~AMateria();
    std::string const & getType() const;
    AMateria( const AMateria &other);
    AMateria&  operator=(const AMateria& other) ; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
#endif