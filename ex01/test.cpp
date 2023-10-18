#include <iostream>

class Fixed {
public:
    // Your Fixed class definition here

    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
        // Define how to represent your Fixed object when streamed to an output stream
        os << "Your representation of Fixed here";
        return os;
    }
};

int main() {
    Fixed a; // Assuming you have instantiated the Fixed object a
    std::cout << "a is " << a << std::endl; // This line will call your defined operator<<

    return 0;
}
