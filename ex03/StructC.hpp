/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structC.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmouto <kelmouto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:33:55 by kelmouto          #+#    #+#             */
/*   Updated: 2023/10/22 14:44:00 by kelmouto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTC_HPP
#define STRUCTC_HPP
#include "AMateria.hpp"

 typedef struct s_data
 {
    AMateria *buff;
    struct s_data *next;
    s_data();
    ~s_data();
 } t_data;
 
t_data *lstnew(AMateria *data);
void Lstaddmateria(t_data **lst, t_data *materia);
#endif