#include <iostream>
#include <vector>
#include <string>

// Project: BookCLI
// Description: Library Management System
// Author: Taha Idra
// Version: 0.1

struct Book {
    std::string title;
    std::string author;
    bool isBorrowed;
};

int main() {
    std::vector<Book> books;

    // إضافة كتاب
    books.push_back({"مئة عام من العزلة", "غابرييل غارسيا ماركيز", false});

    // عرض الكتب
    for (const auto& book : books) {
        std::cout << "العنوان: " << book.title << ", المؤلف: " << book.author;
        if (book.isBorrowed) {
            std::cout << " (مستعار)";
        } else {
            std::cout << " (متاح)";
        }
        std::cout << std::endl;
    }

    return 0;
}
