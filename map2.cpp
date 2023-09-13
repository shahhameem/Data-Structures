#include <iostream>
#include <unordered_map> 
#include <map>

int main() 
{
    std::unordered_map<std::string, std::string> myDict;
    myDict.insert(std::pair<std::string, std::string>("Apple", "Saib"));
    myDict.insert(std::pair<std::string, std::string>("Banana", "Kela"));
    myDict.insert(std::pair<std::string, std::string>("Orange", "Santara"));
    myDict.insert(std::pair<std::string, std::string>("Pineapple", "Ananas"));

    for(auto &pair : myDict) {
        std::cout << pair.first << " - " << pair.second << std::endl;
    }
    return 0;
}