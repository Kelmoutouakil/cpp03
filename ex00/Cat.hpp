/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:18:49 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 11:05:28 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP 
#include<iostream>
#include"Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(std::string h);
        Cat (const  Cat &other);
        Cat&  operator=(const Cat& other);
        void makeSound()const;
        ~Cat();
};

#endif