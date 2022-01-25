#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>

// using namespace std;

void ruler(){
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl << std::endl;
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

    int max_field_width {70};
    int mid = (max_field_width - tours.title.length())/2;
    int field1_width {20};
    int field2_width {20};
    int field3_width {15};
    int field4_width {15};

    ruler();
    std::cout << std::setw(mid) << "" << tours.title << std::endl << std::endl;
    std::cout << std::setw(field1_width) << std::left << "Country" 
              << std::setw(field2_width) << std::left << "Cities"
              << std::setw(field3_width) << std::right << "Population"
              << std::setw(field4_width) << std::right << "Price" 
              << std::endl;
    
    std::cout << std::setw(max_field_width) << std::setfill('-') << "" << std::endl;

    std::cout << std::setfill(' ');          // reset setfill to default
    std::cout << std::setprecision(2) << std::fixed;

    for(const auto country:tours.countries){        //loop through countries
        for(size_t i=0; i<country.cities.size(); i++){
            std::cout << std::setw(field1_width) << std::left << ((i==0)?country.name:"")         //conditional operator
                      << std::setw(field2_width) << std::left << country.cities.at(i).name
                      << std::setw(field3_width) << std::right << country.cities.at(i).population
                      << std::setw(field4_width) << std::right << country.cities.at(i).cost 
                      << std::endl;

        }
    }

    return 0;
}