#include <iostream>
#include <cstdlib>
#include <string>

std::string rev(std::string name)
{
    if (std::string.length() == 1)
        return name;
    
    std::string printable = rev(name);
    std::cout << name;
}

int main(int argc, char* argv[]) {
    if (argc < 1) {
        std::cout << "Please provide the argument";
        exit(1);
    }
    rev(argv[1]);
    return 0;
}
