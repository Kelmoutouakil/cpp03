/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:07:30 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 11:08:53 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP 
#include<iostream>
class WrongAnimal
{
    protected:
        std::string type;
      
    public :
        WrongAnimal();
        WrongAnimal(std::string h);
        WrongAnimal (const  WrongAnimal &other);
       WrongAnimal&  operator=(const WrongAnimal& other);
       void  setType(std::string h);
       std::string getType()const;
        void makeSound()const;
        ~WrongAnimal();
};

#endif