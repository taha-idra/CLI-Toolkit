#include <iostream>
#include <chrono>
#include <string>
#include <vector>

// Project: ChronoFlowCLI
// Description: Time Tracker Application
// Author: Taha Idra
// Version: 0.1

struct TimeEntry {
    std::string task;
    std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
    std::chrono::time_point<std::chrono::high_resolution_clock> endTime;

    std::chrono::duration<double> getDuration() const {
        return endTime - startTime;
    }
};

int main() {
    std::vector<TimeEntry> timeEntries;

    TimeEntry currentEntry;
    currentEntry.task = "كتابة تقرير";
    currentEntry.startTime = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(std::chrono::seconds(5)); // محاكاة العمل لمدة 5 ثواني

    currentEntry.endTime = std::chrono::high_resolution_clock::now();
    timeEntries.push_back(currentEntry);

    for (const auto& entry : timeEntries) {
        std::cout << "المهمة: " << entry.task << ", المدة: " << entry.getDuration().count() << " ثانية" << std::endl;
    }

    return 0;
}
