#include <iostream>

void modifyStaticVariable() {
    static int staticVar = 0;  // Static variable
    staticVar += 5;  // Adding 5 to the static variable
    staticVar *= 2;  // Multiplying the static variable by 2
    staticVar -= 3;  // Subtracting 3 from the static variable
    std::cout<<staticVar;
}

int main() {
    modifyStaticVariable();
    return 0;
}

