/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:18:49 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 14:12:32 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP 
#include<iostream>
#include"Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private : 
        Brain *brain;
    public :
        Cat();
        Cat (const  Cat &other);
        Cat&  operator=(const Cat& other);
        void makeSound()const;
        ~Cat();
};

#endif