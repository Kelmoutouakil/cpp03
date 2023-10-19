/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:40:54 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/19 14:36:39 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *array[4];
   
    for (int i = 0; i < 2 ;i++)
        array[i] = new Dog();
    for (int i = 2 ; i < 4 ; i++)
        array[i] = new Cat();
    for( int j = 0;  j < 4 ;j++)
        delete array[j];
return 0;
}
