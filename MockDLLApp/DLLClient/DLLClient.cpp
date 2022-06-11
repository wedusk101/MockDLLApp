// DLLClient.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "MockLibrary.h"

int main()
{
    float a = 0.0f, b = 0.0f, result = 0.0f;
    size_t idx = 0, ch = 0;

    std::cout << "Please input two real numbers to get their product and sum." << std::endl;
    std::cin >> a >> b;
    result = mockdll::getProduct(a, b);
    std::cout << "The product is: " << result << std::endl;
    result = mockdll::getSum(a, b);
    std::cout << "The sum is: " << result << std::endl;
        
    std::cout << "Please enter the index of the prime number to generate.\n"
              << "Example the 1st (index) prime number is 2, 2nd (index) prime number is 3 etc.\n";

    std::cin >> idx;
    std::cout << "Would you like to check if it's a Mersenne prime? (1 = Yes / 0 = No)" << std::endl;
    std::cout << "Non Mersenne primes will be replaced with zero." << std::endl;
    std::cin >> ch;

    bool flag = (ch == 1) ? true : false;
    mockdll::PrimeGenerator generator(flag);
    std::cout << "The prime number for index " << idx << " is " << generator.getNthPrime(idx) << "." << std::endl;
    std::cout << "Press any key followed by the return key to continue . . ." << std::endl;
    std::cin.clear();
    std::cin.ignore();
    std::cin.get();
}
