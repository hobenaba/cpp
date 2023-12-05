#include <iostream>
#include <string>
#include <cstdlib>

float stringToFloat(const std::string str) {
    return std::stof(str); // Converts string to float
}

double stringToDouble(const std::string str) {
    return std::stod(str); // Converts string to double
}

int main() {
    std::string strFloat = "3";
    std::string strDouble = "2.71828";

    float floatValue = stringToFloat(strFloat);
    double doubleValue = stringToDouble(strDouble);

    std::cout << "String: " << (float)(floatValue) << ", Float: " << floatValue << std::endl;
    std::cout << "String: " << strDouble << ", Double: " << doubleValue << std::endl;

    return 0;
}
