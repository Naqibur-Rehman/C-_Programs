#include <iostream>
#include <fstream>
#include <string>

// using namespace std;

int main()
{
    std::ofstream out_file{"output.txt", std::ios::app};
    if(!out_file){
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "Enter something write to file: " ;
    std::getline(std::cin, line);
    out_file << line << std::endl; 

    out_file.close();

    return 0;
}
