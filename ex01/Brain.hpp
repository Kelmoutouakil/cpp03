/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:43:33 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 14:06:30 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP 
#include<iostream>
class Brain
{
    protected:
        std::string ideas[100];
      
    public :
        Brain();
       // Brain(std::string h);
        Brain (const  Brain &other);
        Brain&  operator=(const Brain& other);
        virtual ~Brain();
};

#endif