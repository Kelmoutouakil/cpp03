/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:50:18 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/22 14:35:30 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include"StructC.hpp"

class Character : public ICharacter
{
    private :
        std::string name;
        AMateria* inventory[4];
        t_data *data ;
    public:
       ~Character();
       Character();
        Character(std::string const&  n);
        Character(const Character& other);
        Character& operator=(const Character& other);
        std::string const & getName() const ;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif