/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:38:39 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:52:10 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource ::MateriaSource()
{
    std::cout<<"MateriaSource 's Constructor called "<<std::endl;
    for(int i = 0; i < 4;i++)
        learnMaterias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other)
{
    std::cout<<" MateriaSource s' copy constructor called\n";
    *this = other;
}

MateriaSource& MateriaSource :: operator=(const MateriaSource& other)  
{
    std::cout <<"MateriaSource 's Copy assignment operator called \n";
    if(this != &other)
    {
        for (int i = 0;i < 4; i++)
           learnMaterias[i] = other.learnMaterias[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout<<" MateriaSource 's destructor called"<< std::endl;
    for(int i = 0;i < 4; i++)
    {
        if(learnMaterias[i] != NULL)
            delete learnMaterias[i];        
    }
}
void MateriaSource :: learnMateria(AMateria * materia)
{
    for(int i = 0; i< 4;i++)
    {
        if(learnMaterias[i] == NULL)
        {
            learnMaterias[i] = materia->clone();
std::cout<<"heloooo\n"<< learnMaterias[i]->getType();
            
            return;
        }
    }
}

AMateria*  MateriaSource:: createMateria(std::string const & type)
{
    for(int i = 0; i< 4;i++)
    {

        if(learnMaterias[i] && learnMaterias[i]->getType() == type)
        {
            return(learnMaterias[i]->clone());
        }
    }
    return(NULL);
}