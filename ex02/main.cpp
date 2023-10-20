/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:40:54 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/20 10:40:31 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    // Attempt to create an instance of the abstract class - will not compile
    // Animal animal; 
    // error: variable type 'Animal' is an abstract class
   
    // Create an instance of the derived class
   {
        Dog dog;

        dog.setType("Golden Retriever");
        std::cout << "Type: " << dog.getType() << std::endl;
        dog.makeSound();
   }
    //system("leaks a.out");
    return 0;
}
