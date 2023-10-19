/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:25:09 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 11:05:36 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP 
#include<iostream>
#include"Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(std::string h);
        Dog (const  Dog &other);
       Dog&  operator=(const Dog& other);
       void makeSound()const;
        ~Dog();
};

#endif