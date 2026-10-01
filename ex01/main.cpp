/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:14:37 by ombatkam          #+#    #+#             */
/*   Updated: 2026/09/15 16:39:08 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(const T &element) {
    std::cout << element << " ";
}

void increment(int &n) {
    n += 1;
}

void exclaim(std::string &s) {
    s += "!";
}

int main() {
    std::cout << "--- Test 1: Int Array ---" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    std::size_t intLen = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Original array: ";
    ::iter(intArray, intLen, printElement<int>);
    std::cout << std::endl;
    std::cout << "Incrementing elements..." << std::endl;
    ::iter(intArray, intLen, increment);
    std::cout << "Modified array: ";
    ::iter(intArray, intLen, printElement<int>);
    std::cout << "\n" << std::endl;


    std::cout << "--- Test 2: String Array ---" << std::endl;
    std::string strArray[] = {"apple", "banana", "cherry"};
    std::size_t strLen = sizeof(strArray) / sizeof(strArray[0]);
    std::cout << "Original array: ";
    ::iter(strArray, strLen, printElement<std::string>);
    std::cout << std::endl;
    std::cout << "Adding exclamation marks..." << std::endl;
    ::iter(strArray, strLen, exclaim);
    std::cout << "Modified array: ";
    ::iter(strArray, strLen, printElement<std::string>);
    std::cout << "\n" << std::endl;

    std::cout << "--- Test 3: Const Int Array (Read-Only) ---" << std::endl;
    const int constIntArray[] = {10, 20, 30};
    std::size_t constIntLen = sizeof(constIntArray) / sizeof(constIntArray[0]);
    std::cout << "Const array: ";
    ::iter(constIntArray, constIntLen, printElement<int>);
    std::cout << std::endl;
    

    // The following line would intentionally fail compilation because constIntArray cannot be modified:
    // ::iter(constIntArray, constIntLen, increment);

    return 0;
}
