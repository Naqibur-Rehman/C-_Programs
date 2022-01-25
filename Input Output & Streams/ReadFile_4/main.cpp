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

    char c {};
    while(in_file.get(c)){
        std::cout << c;   
    }
    in_file.close();
    return 0;
}