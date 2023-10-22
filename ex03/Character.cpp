/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:55:39 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/22 16:34:05 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character :: Character(std::string const&  n) 
{
    name = n;
    std::cout << "Character 's constructor called" << std::endl;
    for (int i = 0;i< 4 ; i++)
        inventory[i] = NULL;
    data  = NULL;
}
Character :: Character() 
{
    std::cout << "Character 's constructor called" << std::endl;
    for (int i = 0; i < 4 ; i++)
        inventory[i] = NULL;
    data  = NULL;
}

Character::Character( const Character &other) :name(other.name)
{
    std::cout<<" Character s' copy constructor called\n";
    *this = other;
}

Character& Character :: operator=(const Character& other)  
{
    std::cout <<"Character 's Copy assignment operator called \n";
    if(this != &other)
    {
        for (int i = 0;i < 4; i++)
            inventory[i] = other.inventory[i]->clone();
    }
    return *this;
}

std::string const &  Character :: getName() const
{
    return(name);
}

void  Character :: equip(AMateria* m)
{
    for(int i = 0; i < 4;i++)
    {
        if(inventory[i] == NULL)
        {
                inventory[i] = m;
                return;
        }
    }   
}

void Character ::unequip(int idx)
{
    if(idx >= 0 && idx < 3 && inventory[idx])
    {
        for (int i  = idx + 1; i < 4 ; i++)
        {
            if (inventory[idx] == inventory[i])
            {
                inventory[idx] = NULL;
                return ;
            }
        }
        Lstaddmateria(&data, lstnew(inventory[idx]));
        inventory[idx] = NULL;
    }
}

void Character:: use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 3 && inventory[idx])
    {
        inventory[idx]->use(target);
    }
}

Character::~Character()
{
    std::cout<< "Character 's destructor is called "<< std::endl;
    for(int i = 0; i < 3; i++)
    {
        if(inventory[i])
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (inventory[i] == inventory[j])
                    inventory[j] = NULL;
            }
             delete inventory[i ];
        }  
    }
    delete data;
}