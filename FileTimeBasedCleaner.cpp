//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <filesystem>
#include <ctime>

namespace fs = std::filesystem;

void delete_old_entries(const fs::path& path, unsigned int duration_in_seconds) {
    time_t now = std::time(nullptr);
    if (!fs::exists(path)) {
        std::cout << "The path does not exist.\n";
        return;
    }


        for (const auto& entry : fs::recursive_directory_iterator(path)) {
            unsigned int last_write_time = fs::last_write_time(entry).time_since_epoch().count();
            unsigned int age = now - last_write_time;
            if (age > duration_in_seconds) {
                fs::remove_all(entry);
                std::cout << "Deleted: " << entry.path() << std::endl;
            }
        }


        unsigned int last_write_time = fs::last_write_time(path).time_since_epoch().count();
    unsigned int age = now - last_write_time;
    if (age > duration_in_seconds) {
        fs::remove_all(path);
        std::cout << "Deleted: " << path << std::endl;
    }
}

int main() {
    std::string path;
    unsigned int days, hours, minutes;
    std::cout << "Enter the directory path: ";
    std::cin >> path;
    std::cout << "Enter the age limit (days hours minutes): ";
    std::cin >> days >> hours >> minutes;

    unsigned int duration_in_seconds = (days * 24 * 3600) + (hours * 3600) + (minutes * 60);
    delete_old_entries(path, duration_in_seconds);

    return 0;
}
