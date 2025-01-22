#include <iostream>
#include <chrono>
#include <thread> // للإيقاف المؤقت

// Project: PerfScopeCLI
// Description: Performance Metrics Tool
// Author: Taha Idra
// Version: 0.1

int main() {
    //
    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "وقت التنفيذ: " << duration.count() << " مللي ثانية" << std::endl;
    //
  
    return 0;
}
