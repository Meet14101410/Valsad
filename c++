#include <iostream>
#include <string>
#include <vector>

struct ValsadProfile {
    std::string name = "Valsad";
    std::string district_type = "District Headquarters";
    std::string primary_fruit = "Alphonso (Hapus) Mango";
    std::vector<std::string> attractions = {"Tithal Beach", "Parnera Hill", "Sai Baba Temple"};
    int pincode = 396001;
};

int main() {
    ValsadProfile valsad;
    
    std::cout << "--- City Summary: " << valsad.name << " ---\n";
    std::cout << "Level:     " << valsad.district_type << "\n";
    std::cout << "Specialty: " << valsad.primary_fruit << "\n";
    std::cout << "Attractions: ";
    for(const auto& site : valsad.attractions) std::cout << site << " | ";
    std::cout << "\nPIN Code:  " << valsad.pincode << std::endl;
    
    return 0;
}
