#include <iostream>
#include <fstream>
#include <string>

// using namespace std;

int main()
{
    std::ifstream in_file{"poem.txt"};
    std::ofstream out_file{"poem_out.txt"};
    if(!out_file){
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    if(!in_file){
        std::cerr << "Error opening input file " <<std::endl;
        return 1;
    }

    char c;
    while(in_file.get(c))
        out_file.put(c);

    std::cout << "File copied" << std::endl;
    out_file.close();
    in_file.close();

    return 0;
}
