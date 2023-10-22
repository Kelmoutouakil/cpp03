/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StructC.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:37:06 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/22 16:30:25 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StructC.hpp"

s_data::s_data()
{
 
    next = NULL;
}

s_data::~s_data()
{
        delete buff;

     delete next;
}

t_data *lstnew(AMateria *data)
{
    t_data *new_node = new t_data();
    if(!new_node)
    {
        std::cout<<"new failed"<<std::endl;
        exit(0);
    }
    new_node->buff = data;
    return new_node;
}

void Lstaddmateria(t_data **lst, t_data *materia)
{
    if (!materia)
        return;

    if (!*lst) 
    {
        *lst = materia;
    }
    else
    {
        t_data *current = *lst;
        t_data *tmp;
        while (current)
        {
            if(current->buff == materia->buff)
                return;
            if(current->next)
                tmp = current;
            current = current->next;
        }
        tmp->next = materia;
    }
}


