/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:20:50 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/21 13:54:49 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include"Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");

me->equip(tmp);
ICharacter* bob = new Character("bob");

me->use(0, *bob);

me->use(0, *bob);


delete bob;
delete me;
delete src;
//
return 0;
}