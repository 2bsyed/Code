#include <iostream>
#include <string>
#include <cstdlib>      // system()
#include <unistd.h>     // getcwd()
#include <limits.h>     // PATH_MAX

int main() {
    std::string input;

    char cwd[PATH_MAX]; // For current working directory

    while (true) {
        // Get current working directory
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            std::cout << cwd << " $ ";
        } else {
            std::cerr << "Error getting current directory\n";
        }

        std::getline(std::cin, input);

        if (input == "exit" || input == "quit") {
            break;
        }

        if (input.empty()) continue;

        // Execute the command using system()
        int ret = system(input.c_str());

        if (ret == -1) {
            std::cerr << "Error executing command\n";
        }
    }

    return 0;
}
