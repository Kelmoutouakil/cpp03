/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:43:28 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 14:08:49 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
   std::cout<<"Brain 's Default constructor called "<<std::endl;
}

Brain :: ~Brain()
{
    std::cout << " Brain 's destructor called\n";
}

Brain::Brain( const Brain &other)
{
    std::cout<<" Brain 's copy constructor called\n";
    *this = other;
}

Brain& Brain :: operator=(const Brain& other) 
{
    std::cout <<"Brain 'sCopy assignment operator called \n";
    if(this != &other)
    {
        for(int i = 0;i< 100;i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}


