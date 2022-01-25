#include <iostream>
#include <fstream>

// using namespace std;

bool find_substring(const std::string &word_to_find, const std::string &target){
    std::size_t found = target.find(word_to_find);
    if(found == std::string::npos)
        return false;
    else
        return true;
}

int main()
{   
    std::fstream in_file;
    std::string word_read{};
    std::string word_to_find{};
    int word_count{0};
    int match_count{0};

    in_file.open("play.txt");
    if(!in_file){
        std::cerr << "Problem in opening file" << std::endl;
        return 1;
    }

    std::cout << "Enter the substring you want to searxch for: ";
    std::cin >> word_to_find;

    while(in_file >> word_read){
        ++word_count;
        if(find_substring(word_to_find, word_read)){
            match_count++;
            std::cout << word_read << " ";
            }
    }
    
    std::cout << "Word Searched: " << word_count << std::endl;
    std::cout << "The substring: " << word_to_find << " was found: " << match_count << " times" << std::endl;

    return 0;
}
