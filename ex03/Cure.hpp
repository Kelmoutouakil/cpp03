/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:38:54 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:07:59 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP 
#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
class Cure : public AMateria
{
    public:
    Cure();
    ~Cure();
    Cure * clone() const;
    void use(ICharacter& target);
};
#endif