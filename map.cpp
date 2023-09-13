#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <cstdint>  

struct CityRecord {
    std::string Name;
    uint64_t Population;
    double Latitude, Longitude;
};

int main() {
    std::unordered_map<std::string, CityRecord> cityMap;

    cityMap["Srinagar"] = CityRecord {"Srinagar", 500000, 2.4, 6.3};
    cityMap["Anantnag"] = CityRecord {"Anantnag", 650000, 2.4, 6.3};
    cityMap["Kulgam"] = CityRecord {"Kulgam", 580000, 2.4, 6.3};
    cityMap["Pulwama"] = CityRecord {"Pulwama", 550000, 2.4, 6.3};
    cityMap["Shopian"] = CityRecord {"Shopian", 280000, 2.4, 6.3};
    cityMap["Budgam"] = CityRecord {"Budgam", 120000, 2.4, 6.3};
    cityMap["Baramullah"] = CityRecord {"Baramullah", 600000, 2.4, 6.3};

    for (const auto& [name, city] : cityMap) {
        std::cout << name << " " << city.Name << " " << city.Latitude << " " << city.Longitude << std::endl;
    }

    return 0;
}
