/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:21:28 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:20:52 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice :: Ice()
{
    type = "ice";
    std::cout<< "Ice 's constructor called"<<std::endl;
}

Ice::Ice( const Ice &other)
{
    std::cout<<" Ice s' copy constructor called\n";
    *this = other;
}

Ice& Ice :: operator=(const Ice& other)  
{
    std::cout <<"Ice 's Copy assignment operator called \n";
    if(this != &other)
    {
       type = other.type;
    }
    return *this;
}
void Ice :: use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

Ice * Ice:: clone() const
{
    Ice * N = new Ice();

    if(!N)
        return NULL;
    return(N);
}
Ice ::~ Ice()
{
    std::cout<<" Ice 's destructor is called" << std::endl;
}