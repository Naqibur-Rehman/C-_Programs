#include <iostream>
#include <set>
#include <map>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

//used for part1
//Display the word and count from file
void display_words(const std::map <std::string, int> &words){
    std::cout << std::setw(12) << std::left << "\nWord"
              << std::setw(7) << std::right << "Count" << std::endl;
    std::cout << "==================================================" << std::endl;
    for(auto pair:words)
        std::cout << std::setw(12) << std::left << pair.first
              << std::setw(7) << std::right << pair.second << std::endl;
}

//used for part2
// display word and occurence in file'
void display_words(const std::map <std::string, std::set<int>> &words){
    std::cout << std::setw(12) << std::left << "\nWord"
              << "Occurences" << std::endl;
    std::cout << "==================================================" << std::endl;
    for(auto pair:words){
        std::cout << std::setw(12) << std::left << pair.first
              << std::left << "[ ";
        for(auto i:pair.second)
            std::cout << i << " ";
        std:;cout << " ]" << std::endl;
        }
}

//This function removes periods, commas, semicolons, and colon in 
// a string and gives a clean version
std::string clean_string(const std::string &s){
    std::string result;
    for(char c:s){
        if(c == ':' || c == ';' || c == '.' || c==',')
            continue;
        else
            result += c;
    }
    return result;
}

// part1 process the file and builds a map of words and the 
// number of times the occur in the file
void part1(){
    std::map <std::string, int> words;
    std::string line;
    std::string word;
    std::ifstream in_file{"words.text"};
    if(in_file){
        while(std::getline(in_file, line)){
            //std::cout << line;
            std::stringstream ss(line);
            while(ss >> word){
                word = clean_string(word);
                words[word]++;
            }
        }
        in_file.close();
        display_words(words);
    }else{
        std::cerr << "Error opening input file" << std::endl;
    }
} 


// part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2(){
    std::map <std::string, std::set<int>> words;
    std::string line;
    std::string word;
    std::ifstream in_file{"words.text"};
    if(in_file){
        int line_number = 0;
         while(std::getline(in_file, line)){
            //std::cout << line;
            line_number++;
            std::stringstream ss(line);
            while(ss >> word){
                word = clean_string(word);
                words[word].insert(line_number);
            }
        }
        in_file.close();
        display_words(words);
    }else{
        std::cerr << "Error opening input file" << std::endl;
    }
}

int main()
{
    part1();
    part2();
    return 0;
}
