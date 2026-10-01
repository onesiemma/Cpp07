/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:51:39 by ombatkam          #+#    #+#             */
/*   Updated: 2026/09/15 16:44:24 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    if (n > 0)
        _elements = new T[n]();
    else
        _elements = NULL;
}

template <typename T>
Array<T>::Array(const Array& src) : _size(src._size)
{
    if (_size > 0)
    {
        _elements = new T[_size]();
        for (unsigned int i = 0; i < _size; i++)
        {
            _elements[i] = src._elements[i];
        }
    }
    else
        _elements = NULL;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
    if (this != &rhs)
    {
        delete[] _elements;

        _size = rhs._size;
        if (_size > 0)
        {
            _elements = new T[_size]();
            for (unsigned int i = 0; i < _size; i++)
            {
                _elements[i] = rhs._elements[i];
            }
        }
        else
            _elements = NULL;
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size || _elements == NULL)
        throw OutOfBoundsException();
    return _elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size || _elements == NULL)
        throw OutOfBoundsException();
    return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

#endif