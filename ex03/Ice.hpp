/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:21:08 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:08:15 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP 
#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
    public:
    Ice();
    ~Ice();
    Ice( const Ice &other);
    Ice&  operator=(const Ice& other);
    Ice * clone() const;
    void use(ICharacter& target);
};
#endif