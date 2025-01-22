#include <iostream>
#include <map>
#include <string>

// Project: InvensaCLI
// Description: Inventory Management System
// Author: Taha Idra
// Version: 0.1

struct Item {
    std::string name;
    int quantity;
};

int main() {
    std::map<std::string, Item> inventory;

    //
    // إضافة عنصر
    inventory["قلم"] = {"قلم رصاص", 100};

    // عرض المخزون
    for (const auto& pair : inventory) {
        std::cout << "الاسم: " << pair.second.name << ", الكمية: " << pair.second.quantity << std::endl;
    }
    //

    return 0;
}
