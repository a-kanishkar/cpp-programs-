#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;
    
    switch(op){
        case '+':
           std::cout << "Result: " << num1 + num2;
           break;
        case '-':
           std::cout << "Result: " << num1 - num2;
           break;
        case '*':
           std::cout << "Result: " << num1 * num2;
           break;
        case '/':
           std::cout << "Result: " << num1 / num2;
           break;
        default:
           std::cout << "Please enter a valid operator!";
    }
    
    return 0;
}
