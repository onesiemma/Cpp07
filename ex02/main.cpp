/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:50:13 by ombatkam          #+#    #+#             */
/*   Updated: 2026/09/15 14:36:06 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp"
/*
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/

#include <iostream>
#include <string>
#include "Array.hpp"

int main() {
    std::cout << "=== Test 1: Empty Array ===" << std::endl;
    Array<int> emptyArr;
    std::cout << "Empty array size: " << emptyArr.size() << std::endl;
    std::cout << "\n=== Test 2: Size Constructor & Value Initialization ===" << std::endl;
    Array<int> intArr(5);
    std::cout << "Array size: " << intArr.size() << std::endl;
    std::cout << "Initial values (should all be 0):" << std::endl;
    for (unsigned int i = 0; i < intArr.size(); i++) {
        std::cout << "intArr[" << i << "] = " << intArr[i] << std::endl;
    }

    std::cout << "\n=== Test 3: Modifying Elements & Copy Independence ===" << std::endl;
    for (unsigned int i = 0; i < intArr.size(); i++) {
        intArr[i] = (i + 1) * 10;
    }
    Array<int> copyArr = intArr;
    copyArr[0] = 999;
    std::cout << "Original intArr[0] (should be 10): " << intArr[0] << std::endl;
    std::cout << "Copy copyArr[0] (should be 999):   " << copyArr[0] << std::endl;
    std::cout << "\n=== Test 4: Array of Strings ===" << std::endl;
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";
    for (unsigned int i = 0; i < strArr.size(); i++) {
        std::cout << "strArr[" << i << "] = " << strArr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "\n=== Test 5: Out of Bounds Exception Handling ===" << std::endl;
    try {
        std::cout << "Trying to access index 5 of an array size 5..." << std::endl;
        intArr[5] = 42;
    } catch (const std::exception& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << "Trying to access index -1..." << std::endl;
        intArr[-1] = 42; 
    } catch (const std::exception& e) {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
    std::cout << "\n=== Test 6: Const Array ===" << std::endl;
    const Array<int> constArr(2);
    std::cout << "Reading constArr[0]: " << constArr[0] << std::endl;
    return 0;
}