#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Project: FinSyncCLI
// Description: Bank Account Management System
// Author: Taha Idra
// Version: 0.1

struct Transaction {
    std::string date;
    std::string description;
    double amount;
};

int main() {
    std::vector<Transaction> transactions;
    double balance = 0.0; // الرصيد الحالي

    // إضافة معاملة
    transactions.push_back({"2024-10-27", "إيداع راتب", 5000.0});
    transactions.push_back({"2024-10-28", "شراء بقالة", -250.0});

    // حساب الرصيد
    for (const auto& transaction : transactions) {
        balance += transaction.amount;
    }

    // عرض كشف حساب بسيط
    std::cout << "كشف الحساب:" << std::endl;
    for (const auto& transaction : transactions) {
        std::cout << std::fixed << std::setprecision(2)
                  << transaction.date << " | " << transaction.description << " | " << transaction.amount << std::endl;
    }
    std::cout << "الرصيد الحالي: " << std::fixed << std::setprecision(2) << balance << std::endl;

    return 0;
}
