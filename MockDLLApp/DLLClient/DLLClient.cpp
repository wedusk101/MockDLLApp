// DLLClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MockLibrary.h"

int main()
{
    float a = 0.0f, b = 0.0f, result = 0.0f;
    std::cout << "Please input two real numbers to get their product and sum." << std::endl;
    std::cin >> a >> b;
    result = mockdll::getProduct(a, b);
    std::cout << "The product is: " << result << std::endl;
    result = mockdll::getSum(a, b);
    std::cout << "The sum is: " << result << std::endl;
    std::cout << "Press any key followed by the return key to continue . . ." << std::endl;
    std::cin.clear();
    std::cin.ignore();
    std::cin.get();
}
