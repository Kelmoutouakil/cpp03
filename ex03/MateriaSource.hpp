/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:38:16 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 11:44:10 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP 
#include<iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
       AMateria *learnMaterias[4];
    public:
    ~MateriaSource();
    MateriaSource();
    MateriaSource( const MateriaSource &other);
    MateriaSource&  operator=(const MateriaSource& other);
    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type) ;
};

#endif