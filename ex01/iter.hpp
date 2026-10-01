/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:18:29 by ombatkam          #+#    #+#             */
/*   Updated: 2026/07/01 01:28:13 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T, typename F>

void    iter(T *array, std::size_t len, F f)
{
    if (!array || !f)
        return ;
    for (std::size_t i = 0; i < len; i++)
        f(array[i]);
}

#endif // !ITER_HPP