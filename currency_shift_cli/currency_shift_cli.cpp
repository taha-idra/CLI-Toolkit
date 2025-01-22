
#include <iostream>
#include <map>
#include <string>
#include <iomanip> // للتحكم في تنسيق الخرج

// Project: CurrenShiftCLI
// Description: Currency Converter Tool
// Author: Taha Idra
// Version: 0.1

int main() {
    std::map<std::string, double> exchangeRates;

    // 
    // تحديد أسعار الصرف 
    exchangeRates["USD"] = 1.0;
    exchangeRates["EUR"] = 0.85;
    exchangeRates["GBP"] = 0.73;

    double amount;
    std::string fromCurrency, toCurrency;

    std::cout << "أدخل المبلغ: ";
    std::cin >> amount;
    std::cout << "من عملة: ";
    std::cin >> fromCurrency;
    std::cout << "إلى عملة: ";
    std::cin >> toCurrency;

    if (exchangeRates.count(fromCurrency) && exchangeRates.count(toCurrency)) {
        double convertedAmount = amount * (exchangeRates[toCurrency] / exchangeRates[fromCurrency]);
        std::cout << std::fixed << std::setprecision(2) << amount << " " << fromCurrency << " = "
                  << convertedAmount << " " << toCurrency << std::endl;
    } else {
        std::cout << "عملة غير مدعومة." << std::endl;
    }
  
    return 0;
}
