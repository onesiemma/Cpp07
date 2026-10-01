/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:51:03 by ombatkam          #+#    #+#             */
/*   Updated: 2026/09/15 16:41:33 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>

template <typename T>
class Array 
{
private:
    T* _elements;
    unsigned int  _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& rhs);
    ~Array();

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    unsigned int size() const;

    class OutOfBoundsException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Index is out of bounds!";
        }
    };
};

// Include the implementation file for templates
//#include "Array.tpp"

#endif