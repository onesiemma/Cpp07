/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:04:42 by ombatkam          #+#    #+#             */
/*   Updated: 2026/07/01 01:14:28 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>

void    swap(T& a, T& b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

const T& min(const T & a, const T & b)
{
    return ((a < b) ? a : b);
}


template <typename T>

const T& max(const T & a, const T & b)
{
    return ((a > b) ? a : b);
}

#endif // !WHATEVER_HPP
