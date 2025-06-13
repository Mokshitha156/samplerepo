#include <iostream>

int main() {
    // Declare two numbers
    double num1, num2, result;

    // Get input from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform subtraction
    result = num1 - num2;

    // Display the result
    std::cout << "The result of subtraction is: " << result << std::endl;

    return 0;
}