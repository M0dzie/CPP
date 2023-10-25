/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:00:47 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 11:31:11 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

template<typename T>
Array<T>::Array() : _arr(NULL) {}

Array<T>::Array(unsigned int n) : _arr(n) {}

#endif