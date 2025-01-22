#include <iostream>
#include <vector>
#include <string>

// Project: TaskCLI
// Description: To-Do List Application
// Author: Taha Idra
// Version: 0.1

struct Task {
    std::string description;
    bool completed;
};

int main() {
    std::vector<Task> tasks;

  // إضافة مهمة
    tasks.push_back({"شراء خبز", false});

    // عرض المهام
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].description;
        if (tasks[i].completed) {
            std::cout << " (مكتملة)";
        }
        std::cout << std::endl;
    }
    //

    return 0;
}
