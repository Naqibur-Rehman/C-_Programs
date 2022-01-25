#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>

// using namespace std;

void ruler(){
    std::cout << "\n12345678901234567890123456789012345678901234567890123456789012345678901234567890" << std::endl << std::endl;
}


struct City
{
    std::string name;
    long population;
    double cost; 
};

struct Country
{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};


int main()
{
    Tours tours
    { "Tour Ticket Prices from Miami ",
        {  
            {
                "Columbia",{
                    {"Bogota", 87742427, 400.98},
                    {"Cali", 83983638, 424.12},
                    {"Medellin", 94746794, 350.67},
                    {"Cartegina", 64753895, 353.87}
                },
            },
            {
                "Brazil",{
                    {"Rio De Janerio", 13357453, 556.74},
                    {"Sao Paulo", 13223454, 987.58},
                    {"Salvador", 18631331, 565.41}
                },
            },
            {   
                "Chile", {
                    {"Valdivia", 24334566, 765.23},
                    {"Santiago", 77849323, 542.78}
                },
            },
            {
                "Argentina",{
                    {"Buenos Aires", 30132433, 723.55}
                }   
            },
       }

    };

    int max {80};
    int min{0};
    // int mid = (max - std::strlen(tours.title))/2;
    // std::cout << mid << std::endl;
    std::cout << sizeof(tours.title);

    ruler();
    std::cout << std::setw(10) << tours.title << std::endl;
    for(const auto country:tours.countries){        //loop through countries
        std::cout << country.name << std::endl;
        for(const auto city:country.cities){
            std::cout << "\t" << city.name