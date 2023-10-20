/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:21:08 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 11:53:17 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP 
#include<iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice(std::string const & type);
    Ice * clone() const;
    void use(ICharacter& target);
};
#endif