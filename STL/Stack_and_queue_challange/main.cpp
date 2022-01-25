#include <iostream>
#include <cctype>
#include <stack>
#include <queue>
#include <iomanip>

using namespace std;

bool is_palindrome(const std::string &s){
    std::stack <char> s1;
    std::queue <char> q1;

    for(auto c: s){
        if(std::isalpha(c)){
            s1.push(toupper(c));
            q1.push(toupper(c));
        }
    }

    char c1,c2;
    while(!s1.empty()){
        c1 = q1.front();
        c2 = s1.top();
        s1.pop();
        q1.pop();
        if(c1 != c2)   
            return false;
    }
    return true;
}

int main()
{
    std::vector <std::string> test_strings {"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", 
    "bob", "ana", "avid diva", "Amore Roma", "A Toyota's a toyota", "A Santa at NASA", "C++", 
    "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", 
    "palindrome"};
    std::cout << std::boolalpha;
    std::cout << setw(8) << std::left << std::left << "Result" << "String" << std::endl;
    for(const auto &s: test_strings ){
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
