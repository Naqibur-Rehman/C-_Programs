#include <iostream>
#include <fstream>

// using namespace std;

int main()
{
    std::fstream in_file;

    in_file.open("poem.txt");
    if(!in_file){
        std::cerr << "Problem in opening file" << std::endl;
        return 1;
    }

    std::string line;
    while(std::getline(in_file, line)){
        std::cout << line << std::endl;   
    }
    in_file.close();
    return 0;
}