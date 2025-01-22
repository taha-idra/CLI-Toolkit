#include <iostream>
#include <cmath>

// Project: CalcCLI
// Description: Scientific Calculator
// Author: Taha Idra
// Version: 0.1

int main() {
    // --- بداية وظائف الآلة الحاسبة ---
    double num1, num2;
    char operation;

    std::cout << "أدخل الرقم الأول: ";
    std::cin >> num1;
    std::cout << "أدخل العملية (+, -, *, /, s (جذر), p (قوة)): ";
    std::cin >> operation;
    std::cout << "أدخل الرقم الثاني: ";
    std::cin >> num2;

    switch (operation) {
        case '+': std::cout << num1 + num2 << std::endl; break;
        case '-': std::cout << num1 - num2 << std::endl; break;
        case '*': std::cout << num1 * num2 << std::endl; break;
        case '/': std::cout << num1 / num2 << std::endl; break;
        case 's': std::cout << sqrt(num2) << std::endl; break;
        case 'p': std::cout << pow(num1, num2) << std::endl; break;
        default: std::cout << "عملية غير صحيحة" << std::endl;
    }
    // --- نهاية وظائف الآلة الحاسبة ---
    return 0;
}
