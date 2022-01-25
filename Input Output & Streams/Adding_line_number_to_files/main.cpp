#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// using namespace std;

int main()
{
    std::ifstream in_file{"play.txt"};
    std::ofstream out_file{"play_out.txt"};
    if(!out_file){
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    if(!in_file){
        std::cerr << "Error opening input file " <<std::endl;
        return 1;
    }

    std::string line{};
    int line_number{0};

    while(std::getline(in_file, line)){
        if(line=="")
            out_file << std::endl;
        else{
            ++line_number;
            out_file << std::setw(7) << std::left << line_number
                     << line << std::endl;
        }
    }

    std::cout << "\nCopy Complete" << std::endl;
    out_file.close();
    in_file.close();

    return 0;
}
