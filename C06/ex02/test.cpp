#include <iostream>

class Base {
public:
    virtual void print() const {
        std::cout << "Base" << std::endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void print() const {
        std::cout << "Derived" << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base &baseRef = derivedObj; // Reference to derived class object

    // Using dynamic_cast with references
    try {
        Derived &derivedRef = dynamic_cast<Derived&>(baseRef);

        // If the dynamic_cast succeeds, print the derived class type
        derivedRef.print();
    } catch (std::bad_cast& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
