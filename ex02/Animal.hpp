/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:08:14 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 10:43:05 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP 
#include<iostream>
class Animal
{
    protected:
        std::string type;
    public :
        Animal();
        Animal (const  Animal &other);
       Animal&  operator=(const Animal& other);
       void  setType(std::string h);
       std::string getType()const;
        virtual void makeSound()const = 0;
        virtual ~Animal();
};

#endif