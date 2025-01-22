#include <iostream>
#include <string>
#include <vector>

// Project: LockTroveCLI
// Description: Password Manager
// Author: Taha Idra
// Version: 0.1

struct PasswordEntry {
    std::string website;
    std::string username;
    std::string password; // يجب تخزينها بشكل آمن (مشفرة) في التطبيق الحقيقي
};

int main() {
    std::vector<PasswordEntry> passwords;

    // إضافة كلمة مرور (مثال بسيط - لا يوجد تشفير)
    passwords.push_back({"google.com", "user123", "password123"});

    // عرض كلمات المرور (مثال بسيط - لا يوجد فك تشفير)
    for (const auto& entry : passwords) {
        std::cout << "الموقع: " << entry.website << ", اسم المستخدم: " << entry.username << ", كلمة المرور: " << entry.password << std::endl;
    }

    return 0;
}
