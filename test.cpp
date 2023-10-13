#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream file("test"); // Open the file

    if (file.is_open()) { // Check if the file is open
        std::string line;
        std::stringstream ss;

        while (getline(file, line)) { // Read the file line by line
            ss << line; // Append the line to the stringstream
        }

        file.close(); // Close the file

        std::string content = ss.str(); // Get the concatenated string from the stringstream
        std::cout << "Content of the file: " << content << std::endl; // Output the concatenated content
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
